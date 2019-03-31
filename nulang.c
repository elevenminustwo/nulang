#include <stdio.h>
#include "nulang.h"

extern int yylex();
extern int yylineno;
extern int number;
extern char* yytext;

char *names[]={NULL,"equals","true","false","minus"};

int loop(int count,int end);

int main(void)
{

	int ntoken,vtoken,ztoken;
	
	loop(1,3);	

	ntoken=yylex();
	while(ntoken){
		if(ntoken==INTEGER){
		int result;
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
			case EQUALS:
				break;
		default:
			printf("Expected '+,-,/,*' but found something else \n");
		}
		}
	vtoken=yylex();	
	
	ntoken = yylex();
    }
    return 0;
}

int loop(int count,int end){//test loop method 
	for(count;count<=end;++count){
	printf("Count => %d \n",count);
	}
	return 0;
}

