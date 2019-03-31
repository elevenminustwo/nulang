#include <stdio.h>
#include "nulang.h"

extern int yylex();
extern int yylineno;
extern char* yytext;

char *names[]={NULL,"equals","true","false","minus"};

int main(void)
{

	int ntoken,vtoken;

	ntoken=yylex();
	while(ntoken){
		printf("ntoken = %d\nvtoken = %d\n",ntoken,vtoken);
		printf("yylex = %d\n",yylex());
		if(yylex() != IDENTIFIER){
			printf("Syntax error in line %d, Expected a '=' but found %s\n",yylineno,yytext);
	}
	vtoken = yylex();
	switch (ntoken) {
	case TRUE:
	case FALSE:
	case EQUALS:
		if(vtoken != EQUALS) {
			printf("Syntax error in line %d, Expected an identifier but found %s\n",yylineno,yytext);
			return 1;
		}
		printf("%s is set to %s\n",names[ntoken],yytext);
		break;
	case MINUS:
		if(vtoken != INTEGER) {
			printf("Syntax error in line %d, Expected an integer but found %s\n",yylineno,yytext);
			return 1;
		}
		printf("%s is set to %s\n",names[ntoken],yytext);
		break;
	default:
		printf("Syntax error in line %d\n",yylineno);
	}
	ntoken = yylex();
    }
    return 0;
}

