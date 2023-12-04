/*
 ============================================================================
 Name        : ADD06_String_Compare.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : Comparing Between Two Strings
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str1 [20];
	char str2 [20];
	int i;
	printf("string 1: ");
	fflush(stdin);   fflush(stdout);
	gets(str1);
	printf("string 2: ");
	fflush(stdin);   fflush(stdout);
	gets(str2);
	//comparing Loob
	for(i=0 ; str1[i] != 0 || str2[i] != 0 ; i++){
		if( str1[i] != str2[i] ){
			i=0;
			break;  //if u realize any different
		}
	}
	(i == 0) ? printf("the two Strings are Different") : printf("the two Strings are Identical");
}
