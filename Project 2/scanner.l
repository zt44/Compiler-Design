%{

// Nathan Monahelis (nmonahel@ucsc.edu)
// Tarik Zeid (tzeid@ucsc.edu)

#include "lyutils.h"

#define YY_USER_ACTION  { lexer::advance(); }

int yylval_token (int symbol) {
   yylval = new astree (symbol, lexer::lloc, yytext);
   lexer::addToken(symbol); 
   return symbol;
}

%}

%option 8bit
%option debug
%option nodefault
%option noinput
%option nounput
%option noyywrap
%option warn
%option verbose

LETTER          [A-Za-z_]
DIGIT           [0-9]
IDENT           ({LETTER}({LETTER}|{DIGIT})*)
NOTIDENT        ({DIGIT}({LETTER}|{DIGIT})*)
INTCON          ({DIGIT}+)
CHAR            ([^\\'\n]|\\[\\'"0nt])
MANTISSA        ({DIGIT}+\.?{DIGIT}*|\.{DIGIT}+)
EXPONENT        ([Ee][+-]?{DIGIT}+)
STRING          (\"([^\\"\n]|\\[\\'"0nt])*\")
CHARCON         ('{CHAR}')
STRINGCON       (\"{SCHAR}*\")
NOTCHARCON      ('{CHARN}*|'{CHAR}*{NOTCHAR}{CHARN}*'|'{CHAR}{2,}'|'')
NOTSTRINGCON    (\"{SCHARN}*|\"{SCHAR}*{NOTCHAR}{SCHARN}*\")
SCHAR           ([^\\"\n]|\\[\\'"0nt])
NOTCHAR         (\\[^\\'"0nt])
CHARN           ({CHAR}|{NOTCHAR})
SCHARN          ({SCHAR}|{NOTCHAR})

%%

"#".*           { lexer::include(); }
[ \t]+          { }
\n              { lexer::newline(); }

"void"          { return yylval_token(TOK_VOID); }
"char"          { return yylval_token(TOK_CHAR); }
"int"           { return yylval_token(TOK_INT); }
"string"        { return yylval_token(TOK_STRING); }
"struct"        { return yylval_token(TOK_STRUCT); }
"if"            { return yylval_token(TOK_IF); }
"else"          { return yylval_token(TOK_ELSE); }
"while"         { return yylval_token(TOK_WHILE); }
"return"        { return yylval_token(TOK_RETURN); }
"null"          { return yylval_token(TOK_NULL); }
"ord"           { return yylval_token(TOK_ORD); }
"chr"           { return yylval_token(TOK_CHR); }
"new"           { return yylval_token(TOK_NEW); }

"[]"            { return yylval_token (TOK_ARRAY); }
"="             { return yylval_token ('='); }
"+"             { return yylval_token ('+'); }
"-"             { return yylval_token ('-'); }
"*"             { return yylval_token ('*'); }
"/"             { return yylval_token ('/'); }
"^"             { return yylval_token ('^'); }
"("             { return yylval_token ('('); }
")"             { return yylval_token (')'); }
"["             { return yylval_token ('['); }
"]"             { return yylval_token (']'); }
"{"             { return yylval_token ('{'); }
"}"             { return yylval_token ('}'); }
";"             { return yylval_token (';'); }
","             { return yylval_token (','); }
"."             { return yylval_token ('.'); }
"<"             { return yylval_token ('<'); }
">"             { return yylval_token ('>'); }
"%"             { return yylval_token ('%'); }
"!"             { return yylval_token ('!'); }
"=="            { return yylval_token (TOK_EQ); }
"!="            { return yylval_token (TOK_NE); }
"<"             { return yylval_token (TOK_LT); }
"<="            { return yylval_token (TOK_LE); }
">"             { return yylval_token (TOK_GT); }
">="            { return yylval_token (TOK_GE); }

{CHARCON}       { return yylval_token (TOK_CHARCON); }
{STRING}        { return yylval_token (TOK_STRINGCON); }
{IDENT}         { return yylval_token (TOK_IDENT); }
{INTCON}        { return yylval_token (TOK_INTCON); }
{NOTSTRINGCON}  { lexer::badtoken (yytext);
                  return yylval_token (TOK_STRINGCON); }
{NOTIDENT}      { lexer::badtoken (yytext);
                  return yylval_token (TOK_IDENT); }
.               { lexer::badchar (*yytext); }

%%

