/*
 ============================================================================
 Name        : LAB03_Calculate_the_Minimum_of_Two_Numbers.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Your copyright notice
 Description : finding the smallest number
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	float n1,n2;
	printf("enter two numbers: \n");
	fflush(stdin);  fflush(stdout);
	scanf("%f%f",&n1,&n2);
	printf("the minimum value is: %f",(n1>n2) ? n2 : n1 );
}
