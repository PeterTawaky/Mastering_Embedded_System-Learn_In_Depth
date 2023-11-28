/*
 ============================================================================
 Name        : EX6_Swamping_Two_Numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	   int x1,x2,s;
	   setbuf(stdout,NULL);
	   printf("enter value of a: ");
	    scanf("%d",&x1);
	    printf("enter value of b: ");
	    scanf("%d",&x2);
	    s=x1;  //value of a saved to s
	    x1=x2;  // a taked the new value
	    x2=s;   // b taked the new value
	    printf("a= %d\n",x1);
	    printf("b= %d\n",x2);
	    return EXIT_SUCCESS;
}
