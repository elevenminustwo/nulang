#include <stdio.h>
#include "nulang.h"
#include "loop.h"

extern int yylex();
extern int yylineno;
extern int number;
extern char* yytext;
extern int loop(int count,int value,int end);
extern void _loop(int start,int end);


char *names[]={NULL,"equals","true","false","minus"};


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
			ntoken=yylex();
			printf("LOOP FOUND!\n");
			//_loop(1,3);	
			if(vtoken!=INTEGER){
			printf("Expected number after LOOP call but found %s\n",yytext);			
			break;
			}	
			switch(vtoken){
				case INTEGER:
					printf("Loop start value is %d ",number);
					switch(ntoken){
					case GOES:
						vtoken=yylex();
						printf("and it goes to ");
						switch(vtoken){
						case INTEGER:
							printf("%d \n",number);
							ntoken=yylex();
							switch(ntoken){
							case POT:
								_loop(0,4);
							break;
							default:
							printf("ntoken= %d \n",ntoken);
					}
						default:
						printf("vtoken= %d \n",vtoken);
					}
					default:
						printf("ntoken= %d \n",ntoken);
					}		
			default:
				printf("sadsa");
			}	
		default:
			printf("%s is not recognized command!\n",yytext);
		}
	ntoken = yylex();
    }
    return 0;
}

