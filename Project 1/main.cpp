//
//  main.cpp
//  p2
//  Nathan Monahelis (nmonahel@ucsc.edu)
//  Tarik Zeid (tzeid@ucsc.edu)
//
//

#include <iostream>
#include <string>
using namespace std;

#include <errno.h>
#include <libgen.h>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <sys/wait.h>
#include <unistd.h>
#include <fstream>

#include "string_set.h"
#include "auxlib.h"
#include "astree.h"
#include "lyutils.h"

const string CPP = "/usr/bin/cpp";
constexpr size_t LINESIZE = 1024;
string command;
int d_flag = 0;
char * d_options = NULL;
const char * filename;
FILE * tokenOut;


// Chomp the last character from a buffer if it is delim.
void chomp (char* string, char delim) {
    size_t len = strlen (string);
    if (len == 0) return;
    char* nlpos = string + len - 1;
    if (*nlpos == delim) *nlpos = '\0';
}
// Run cpp against the lines of the file.
void cpplines (const char* filename)
{
    char inputname[LINESIZE];
    string token_output = basename(const_cast <char *>(filename));
    
    token_output = token_output.substr(0, token_output.length() - 3)
                 + ".tok";
    
    tokenOut = fopen(token_output.c_str(), "w");
    
    if(tokenOut == NULL)
        fprintf(stderr, "Invalid file open");
    
    strcpy (inputname, filename);
    size_t tokenNum;
    
    for (;;) 
    {
        
        tokenNum = yylex();

        lexer::addToken(tokenOut, tokenNum); 

        if (tokenNum == YYEOF) break;
        
    }

    fclose(tokenOut);
}

void cpp(const char* filename)
{
    
    yyin = popen(command.c_str(), "r");
    
    if (yyin == NULL)
    {
        syserrprintf (command.c_str());
        //exit (exec::exit_status);
    }
    else
    {
        if(yy_flex_debug)
        {
            fprintf(stderr, "-- popen (%s), fileno(yyin) = %d\n",
                    command.c_str(), fileno (yyin));
        }
        
        cpplines(filename);
        
    }
}

void close_cpp() 
{
   int pclose_rc = pclose (yyin);
   eprint_status (command.c_str(), pclose_rc);
   if (pclose_rc != 0) exec::exit_status = EXIT_FAILURE;
}


// Function to check for suffixes. 
// Need this to check our filename ends with ".oc"
bool suffix(const string & input, const string & suffix)
{
    string suf = input.substr(input.length() - 3, input.length());
    
    if (suf != suffix) return false;
    
    return true;
    
}

// Sets certain flags, if any are enabled on input.
void set_flags(int argc, char ** argv)
{
    // int value to represent the option ID
    int opt;
    
    const char* filename = argv[argc - 1];
    string outputFile = basename(const_cast<char *> (filename));

    
    yy_flex_debug = 0;
    
    yydebug = 0;
    
    d_flag = 0;
    
    while ((opt = getopt(argc, argv, "@:D:ly")) != -1)
    {
        switch (opt)
        {
            case '@':
                cout << "@ has been set.\n";
                set_debugflags(optarg);
                break;
                
            case 'D':
                cout << "Debug flag has been set.\n";
                command = CPP + " -D" + optarg + " " + filename;
                d_flag = 1;
                break;
                
            case 'l':
                yy_flex_debug = 1;
                break;
                
            case 'y':
                yydebug = 1;
                break;
                
        }
        
    }

    filename = optind == argc ? "-" : argv[optind];
    
}

int main(int argc, char ** argv)
{
    exec::execname = basename(argv[0]);
    filename = argv[argc - 1]; 
    string outputFile = basename(const_cast<char*>(filename));
    command = CPP + " " + filename; 
    
    bool suf = suffix(filename, ".oc");
    
    if (suf != true)
    {
        cout << "Filetype must be .oc - please try again.\n";
        return EXIT_FAILURE;
    }
    
    set_flags(argc, argv);

    cpp(filename);

    close_cpp();    

    outputFile = outputFile.substr(0, outputFile.length() - 3) + ".str";
    
    FILE * output = fopen(outputFile.c_str(), "w");

    string_set::dump(output);
    
    fclose(output);
    
    return EXIT_SUCCESS;
    
}
