%{
#include "nulang.h"
int number;
%}
%option nounput yylineno

%%
:			return COLON;
=			return EQUALS;
true			return TRUE;
false			return FALSE;
"*"			return MULTIPLY;
"/"			return DIVIDE;
"+"			return PLUS;
"-"			return MINUS;

[a-zA-Z][_a-zA-Z0-9]*	return IDENTIFIER;
[0-9]+			{
			number=atoi(yytext);
			return INTEGER;
			}
[\t\n]			;

%%

int yywrap(void)
{
	return 1;
}
