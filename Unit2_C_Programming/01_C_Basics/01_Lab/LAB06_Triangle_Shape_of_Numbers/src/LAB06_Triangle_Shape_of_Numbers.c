/*
 ============================================================================
 Name        : LAB06_Triangle_Shape_of_Numbers.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Your copyright notice
 Description : triangle of numbers which increment it's start each line and it's area decrease
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int max_number,r,c=0;
	printf("Please, enter the Max number you want to reach: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&max_number);
	for( r=0 ; r<=max_number ; r++){
		for(  ; c <= max_number ; c++){
			printf("%d  ",c);

		}
		c=r+1;   // c reset value
		printf("\n");
	}

}
