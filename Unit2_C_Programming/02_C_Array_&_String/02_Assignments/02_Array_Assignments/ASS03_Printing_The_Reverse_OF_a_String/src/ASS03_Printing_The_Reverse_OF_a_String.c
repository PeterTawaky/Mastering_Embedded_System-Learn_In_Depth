/*
 ============================================================================
 Name        : ASS03_Printing_The_Reverse_OF_a_String.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include<stdio.h>
#include <stdlib.h>
#include<string.h>

int main()
{
	char str [50];
	int length, i, k;
	printf("Please,enter any string: ");
	fflush(stdin) ;
	fflush(stdout) ;
	gets(str);
	length = strlen(str) ;
	char reverse [length];
	for(i=0,k=strlen(str)-1 ; str[i]!= 0 ; i++, k--)
		reverse[i]=str[k];
	printf("%s", reverse) ;
	return 0 ;
}
