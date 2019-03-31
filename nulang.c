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
	
	ntoken=yylex();
	while(ntoken){
	  vtoken=yylex();	
	  switch(ntoken){
		case INTEGER:
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
				printf("Expected '+,-,/,*,=' after %d but found %s \n",number,yytext);
			}	
			break;
		case LOOP:
			printf("LOOP FOUND!\n");
			//loop(1,3);	
			if(vtoken!=INTEGER){
			printf("Expected number after LOOP call but found %s\n",yytext);			
			}	
			break;
		default:
			printf("%s is not recognized command!\n",yytext);
		}

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

