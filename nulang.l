%{
#include "nulang.h"
%}
%option nounput yylineno

%%
:			return COLON;
=			return EQUALS;
true			return TRUE;
false			return FALSE;
-			return MINUS;

[a-zA-Z][_a-zA-Z0-9]*	return IDENTIFIER;
[1-9][0-9]*		return INTEGER;
[\t\n]			;

%%

int yywrap(void)
{
	return 1;
}
