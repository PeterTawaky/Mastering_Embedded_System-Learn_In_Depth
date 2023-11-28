/*
 ============================================================================
 Name        : EX3_printing_sum_of_two_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	 int x1,x2;
	 setbuf(stdout,NULL);
	 printf("Please, enter two numbers: \n");
	    scanf("%d %d",&x1,&x2);
	    printf("the Sum: %d",x1+x2);
	    return EXIT_SUCCESS;
}
