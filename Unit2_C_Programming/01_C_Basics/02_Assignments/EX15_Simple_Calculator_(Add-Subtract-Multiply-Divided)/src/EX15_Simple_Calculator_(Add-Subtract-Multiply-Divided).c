/*
 ============================================================================
 Name        : EX15_Simple_Calculator_(Add-Subtract-Multiply-Divided).c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;

	float x1,x2;
	while(5){
		printf("Enter operator either + or - or / or * : \n");
		fflush(stdin);  fflush(stdout);
		scanf("%c",&c);
		printf("Enter two numbers: \n");
		fflush(stdin);  fflush(stdout);
		scanf("%f%f",&x1,&x2);
		switch(c){
		case '+' :
			printf("%f%c%f=%f\n",x1,c,x2,x1+x2);
			break;
		case '-' :
			printf("%f%c%f=%f\n",x1,c,x2,x1-x2);
			break;
		case '/' :
			printf("%f%c%f=%f\n",x1,c,x2,x1/x2);
			break;
		case '*' :
			printf("%f%c%f=%f\n",x1,c,x2,x1*x2);
			break;

		}
	}
	return 0;
}
