#include <stdio.h>
#include <stdbool.h>
#include "nulang.h"
#include "loop.h"
#include "comparison.h"

//lex
extern int yylex();
extern int yylineno;
extern int number;
extern char* yytext;

//loop.h
extern int loop();
extern void _loop();
extern void setStart(int _start);
extern void setEnd(int _end);
extern int getStart();
extern int getEnd();

//comparison.h
extern bool equals(int num1,int num2);
extern bool less(int num1,int num2);
extern bool greater(int num1,int num2);


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
					printf("Minus detected number=> %d \n",number);
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
				printf("Loop start value is %d ",number);			setStart(number);					
					switch(ntoken){
					case GOES:
						vtoken=yylex();
						printf("and it goes to ");
						switch(vtoken){
						case INTEGER:
							printf("%d \n",number);
							setEnd(number);
							ntoken=yylex();
							switch(ntoken){
							case POT:
								_loop();
							break;
							case GET:
							printf("loop sum=%d \n",loop());
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

