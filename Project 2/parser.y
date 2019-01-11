%{
// Dummy parser for scanner project.

// Nathan Monahelis (nmonahel@ucsc.edu)
// Tarik Zeid (tzeid@ucsc.edu)

#include <cassert>

#include "lyutils.h"
#include "astree.h"

%}

%debug
%defines
%error-verbose
%token-table
%verbose

%initial-action {
  parser::root = new astree (TOK_ROOT, {0, 0, 0}, "<<ROOT>>");
}

%token TOK_VOID TOK_CHAR TOK_INT TOK_STRING
%token TOK_IF TOK_ELSE TOK_WHILE TOK_RETURN TOK_STRUCT
%token TOK_NULL TOK_NEW TOK_ARRAY
%token TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE
%token TOK_IDENT TOK_INTCON TOK_CHARCON TOK_STRINGCON
%token TOK_BLOCK TOK_CALL TOK_IFELSE TOK_INITDECL
%token TOK_POS TOK_NEG TOK_NEWARRAY TOK_TYPEID TOK_FIELD
%token TOK_ORD TOK_CHR TOK_ROOT
%token TOK_RETURNVOID TOK_PARAMLIST TOK_PROTOTYPE TOK_DECLID
%token TOK_NEWSTRING TOK_VARDECL TOK_INDEX TOK_FUNCTION

%right TOK_IFELSE TOK_IF TOK_ELSE
%right '=' 
%right TOK_POS TOK_NEG '!' TOK_NEW

%left TOK_EQ TOK_NE TOK_LT TOK_LE TOK_GT TOK_GE
%left '+' '-'
%left '*' '/' '%'
%left TOK_ARRAY TOK_FIELD TOK_FUNCTION '.' '['

%nonassoc TOK_PARENS

%start start

%%

start   : program             { parser::root = $1; }
        ;

program  : program structdef    { $$ = $1->adopt($2); }
         | program function     { $$ = $1->adopt($2); }
         | program statement    { $$ = $1->adopt($2); }
         | program error '}'    { $$ = $1; }
         | program error ';'    { $$ = $1; }
         |                      { $$ = parser::root; }

structdef : TOK_STRUCT TOK_IDENT '{' fielddecl_list '}'  
            { destroy($3, $5); 
              $$ = $1->adopt_sym($2, TOK_TYPEID)->adopt($3); }
          | TOK_STRUCT TOK_IDENT '{' '}'                 
            { destroy($3, $4); $$ = $1->adopt_sym($2, TOK_TYPEID); }
          ;

fielddecl_list: fielddecl_list fielddecl ';'              
                { destroy($3); 
                $$ = $1->adopt($2); }
              | fielddecl ';'                             
                { destroy($2); $$ = $1; }
              ;

fielddecl: type TOK_IDENT        
           { $$ = $1->adopt_sym($2, TOK_FIELD); }
         | type TOK_ARRAY TOK_IDENT                  
           { $$ = $2->adopt($1)->adopt_sym($3, TOK_FIELD); }
         ;

type:     TOK_VOID    { $$ = $1; }
        | TOK_INT     { $$ = $1; }
        | TOK_STRING  { $$ = $1; }
        | TOK_CHAR    { $$ = $1; }
        | TOK_IDENT   { $$ = $1; }
        | TOK_TYPEID  { $$ = $1; }
        ;

function  : identdecl '(' ')' ';'
            { astree* as = new astree(TOK_PROTOTYPE, $1->lloc, "");
            $$ = as->adopt($1);
            $$ = as->adopt_next($2, TOK_PARAMLIST); 
            destroy($3, $4); }
          | identdecl '(' ')' block    
            { astree* as = new astree(TOK_FUNCTION, $1->lloc, "");
            $$ = as->adopt($1); 
            $$ = as->adopt_next($2, TOK_PARAMLIST); 
            $$ = as->adopt($4); 
            destroy($3, nullptr); }
          | identdecl params ')' ';'  
            { astree* as = new astree(TOK_PROTOTYPE, $1->lloc, ""); 
            $$ = as->adopt($1);
            $$ = as->adopt($2); 
            destroy($3, $4); }
          | identdecl params ')' block      
            { astree* as = new astree(TOK_FUNCTION, $1->lloc, "");
            $$ = as->adopt($1);
            $$ = as->adopt($2);
            $$ = as->adopt($4); 
            destroy($3, nullptr); }
          ;

params    : '(' identdecl                   
            { $$ = $1->adopt_sym($2, TOK_PARAMLIST); }
          | params ',' identdecl            
            { $$ = $1->adopt($3); 
            destroy($2, nullptr); }

identdecl : type TOK_ARRAY TOK_IDENT    { $$ = $2->adopt($1);
                                              $$ = $2->adopt_next($3, TOK_DECLID); }
          | type TOK_IDENT              { $$ = $1->adopt_next($2, TOK_DECLID); }
          ;


block     : '{' '}'                         { $$ = $1->adopt_sym(nullptr, TOK_BLOCK); 
                                              destroy($2, nullptr); }
          | blockhead '}'                        { $$ = $1->adopt_sym(nullptr, TOK_BLOCK); 
                                              destroy($2, nullptr); }
          ;


blockhead: blockhead statement                 
            { $$ = $1->adopt($2); }
         | '{' statement                       
            { $$ = $1->adopt($2); }
         ;

statement     : block                          { $$ = $1; }
              | vardecl                        { $$ = $1; }
              | while                          { $$ = $1; }
              | ifelse                         { $$ = $1; }
              | return                         { $$ = $1; }
              | expr ';'                       { destroy($2); 
                                                 $$ = $1; }
              ;

vardecl   : identdecl '=' expr ';'          { $$ = $2->adopt_sym($1, TOK_VARDECL); 
                                              $$ = $2->adopt($3); 
                                              destroy($4, nullptr); }

while   : TOK_WHILE '(' expr ')' 
          statement  { $$ = $1->adopt($3);
                       $$ = $1->adopt($5); 
                      destroy($2, $4); }
        ;

ifelse  : TOK_IF '(' expr ')' 
            statement %prec TOK_ELSE
            { $$ = $1->adopt($3);
              $$ = $1->adopt($5); 
              destroy($2, $4); }
          | TOK_IF '(' expr ')' 
            statement TOK_ELSE statement 
            { $$ = $1->adopt_sym($3, TOK_IFELSE); 
              $$ = $1->adopt($5);
              $$ = $1->adopt($7); 
              destroy($2, $4); }
      ;

return: TOK_RETURN expr ';' 
        { $$ = $1->adopt($2); }
      | TOK_RETURN ';'                     
        { $$ = $1->adopt_sym($2, TOK_RETURNVOID); }
      ;

expr  : expr TOK_IFELSE expr   { $$ = $2->adopt($1, $3); }
      | expr TOK_EQ expr       { $$ = $2->adopt($1, $3); }
      | expr TOK_NE expr       { $$ = $2->adopt($1, $3); }
      | expr TOK_LT expr       { $$ = $2->adopt($1, $3); }
      | expr TOK_LE expr       { $$ = $2->adopt($1, $3); }
      | expr TOK_GT expr       { $$ = $2->adopt($1, $3); }
      | expr TOK_GE expr       { $$ = $2->adopt($1, $3); }
      | expr '+' expr          { $$ = $2->adopt($1, $3); }
      | expr '-' expr          { $$ = $2->adopt($1, $3); }
      | expr '*' expr          { $$ = $2->adopt($1, $3); }
      | expr '/' expr          { $$ = $2->adopt($1, $3); }
      | expr '%' expr          { $$ = $2->adopt($1, $3); }
      | expr '=' expr          { $$ = $2->adopt($1, $3); }
      | '!' expr               { $$ = $1->adopt($2); }
      | '-' expr %prec TOK_NEG { $$ = $1->adopt_sym($2, TOK_NEG); }
      | '+' expr %prec TOK_POS { $$ = $1->adopt_sym($2, TOK_POS); }
      | allocator %prec TOK_NEW { $$ = $1; }
      | call                   { $$ = $1; }
      | '(' expr ')'           { destroy($1, $3); $$ = $2; }
      | variable               { $$ = $1; }
      | constant               { $$ = $1; }
      ;


allocator: TOK_NEW TOK_IDENT '(' ')'                 
            { destroy($3, $4); $$ = $1->adopt_sym($2, TOK_TYPEID); }
         | TOK_NEW TOK_STRING '(' expr ')'           
            { destroy($3, $5); 
              destroy($2); 
              $$ = $1->adopt_sym($4, TOK_NEWSTRING ); }
         | TOK_NEW type '[' expr ']'      
            { destroy($3, $5); 
              $$ = $1->adopt_sym($2, TOK_NEWARRAY)->adopt_sym
              ($4, TOK_NEWARRAY);}
         ; 

call     : TOK_IDENT '(' ')'              
            { destroy($3); $$ = $1->adopt_sym($2, TOK_CALL); }
         | TOK_IDENT callargs ')'         
            { destroy($3); $$ = $2->adopt_sym($1, TOK_CALL); }
         ;

callargs : '(' expr           { $$ = $1->adopt($2); }
         | callargs ',' expr  { destroy($2); $$ = $1->adopt($3); }
         ;

variable  : TOK_IDENT                       
            { $$ = $1; }
          | expr '[' expr ']'               
            { $$ = $2->adopt_sym($1, TOK_INDEX); 
              $$ = $2->adopt($3); 
              destroy($4, nullptr); }
          | expr '.' TOK_IDENT              
            { $$ = $2->adopt($1);
              $$ = $2->adopt_next($3, TOK_FIELD); }
          ;

constant :  TOK_INTCON     { $$ = $1; }
          | TOK_CHARCON    { $$ = $1; }
          | TOK_STRINGCON  { $$ = $1; }
          | TOK_NULL       { $$ = $1; }
         ;

%%


const char *parser::get_tname (int symbol) {
   return yytname [YYTRANSLATE (symbol)];
}


bool is_defined_token (int symbol) {
   return YYTRANSLATE (symbol) > YYUNDEFTOK;
}

/*
static void* yycalloc (size_t size) {
   void* result = calloc (1, size);
   assert (result != nullptr);
   return result;
}
*/

