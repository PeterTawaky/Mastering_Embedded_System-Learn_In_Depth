/*
 ============================================================================
 Name        : EX14_Find_the_Factorial_of_a_number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int x,i,factorial=1;
	setbuf(stdout,NULL);
	printf("Please, enter a number: ");
	scanf("%d",&x);
	if(x>=0){
		for(i=1;i<=x;i++)
			factorial*=i;
	}
	else
		factorial=0;
	factorial ? printf("Factorial=%d",factorial) : printf("The number is negative has no factorial");
	return EXIT_SUCCESS;
}
