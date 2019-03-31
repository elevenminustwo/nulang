%{
#include "nulang.h"
int number;
%}
%option nounput yylineno

%%
[\t\n]			{
			yytext="nothing";
			return NOTHING;
			}
:			return COLON;
=			return EQUALS;
true			return TRUE;
false			return FALSE;
"*"			return MULTIPLY;
"/"			return DIVIDE;
"+"			return PLUS;
"-"			return MINUS;
loop			return LOOP;
"?"			return IF;
"->"			return GOES;
".pot"			return POT;

[a-zA-Z][_a-zA-Z0-9]*	return IDENTIFIER;
[0-9]+			{
			number=atoi(yytext);
			return INTEGER;
			}

%%

int yywrap(void)
{
	return 1;
}
