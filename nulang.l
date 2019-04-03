%{
#include "nulang.h"
int number;
%}
%option nounput yylineno

%%
[\t]			{
			yytext="nothing";
			return NOTHING;
			}
[\n]			;
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
"->"			return GOESS;
".sum"			return SUM;
".pot"			return POT;
".g"			return GET;
".s"			return SET;

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
