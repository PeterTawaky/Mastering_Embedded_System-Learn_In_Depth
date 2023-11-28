/*
 ============================================================================
 Name        : LAB04_Calculate_the_Summation_of_Values_Between_Two_Numbers.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n1,n2,i,sum=0;
	printf("enter two numbers: \n");
	fflush(stdin);  fflush(stdout);
	scanf("%d%d",&n1,&n2);
	for(i=n1;i<=n2;i++){
		sum+=i;
	}
	printf("sum of numbers between (%d) & (%d) is: %d",n1,n2,sum);
}
