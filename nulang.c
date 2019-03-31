#include <stdio.h>
#include "nulang.h"

extern int yylex();
extern int yylineno;
extern int number;
extern char* yytext;

char *names[]={NULL,"equals","true","false","minus"};

int main(void)
{

	int ntoken,vtoken,ztoken;

	ntoken=yylex();
	while(ntoken){
		if(ntoken!=INTEGER){
			printf("Expected integer but found %s at line %d\n",yytext,yylineno);		
		return 1;
		}
	vtoken=yylex();	
	switch(vtoken){
	case MULTIPLY:
		break;
	case DIVIDE:
		break;
	case PLUS:
		break;
	case MINUS:
		printf("number=> %d \n",number);
		break;
	default:
		printf("Expected '+,-,/,*' but found something else \n");
	}
	ntoken = yylex();
    }
    return 0;
}

