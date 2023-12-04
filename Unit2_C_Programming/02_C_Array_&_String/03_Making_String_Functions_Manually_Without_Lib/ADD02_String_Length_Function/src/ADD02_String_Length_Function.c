/*
 ============================================================================
 Name        : ADD02_String_Length_Function.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : you can Fork any time
 Description : getting number of characters u entered
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int length=0;
	char c;
	printf("enter any string: ");
	fflush(stdin);   fflush(stdout);
	while(c != '\n'){
		scanf("%c",&c);
		length ++;
	}
	printf("the String Length is: %d",length-1);
}
