/*
 ============================================================================
 Name        : EX4_multiplying_floating_number.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float x1,x2;
	setbuf(stdout,NULL);
	printf("Enter two numbers: \n");
	scanf("%f %f",&x1,&x2);
	printf("the Product: %f",x1*x2);

	return EXIT_SUCCESS;
}
