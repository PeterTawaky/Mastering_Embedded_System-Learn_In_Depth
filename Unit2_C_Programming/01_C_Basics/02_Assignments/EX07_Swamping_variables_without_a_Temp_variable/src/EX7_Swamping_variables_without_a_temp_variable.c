/*
 ============================================================================
 Name        : EX7_Swamping_variables_without_a_temp_variable.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int a,b;
	setbuf(stdout,NULL);
	printf("a=");
	    scanf("%d",&a);
	    b=a;
	    printf("b=");
	    scanf("%d",&a);
	    printf("a=%d \n",a);
	    printf("b=%d \n",b);
	    return EXIT_SUCCESS;
}
