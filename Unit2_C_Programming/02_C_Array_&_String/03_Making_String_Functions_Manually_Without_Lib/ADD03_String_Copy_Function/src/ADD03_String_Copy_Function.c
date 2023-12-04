/*
 ============================================================================
 Name        : ADD03_String_Copy_Function.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : copy a full string in another string
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char st1 [50];
	char st2 [50];
	int i;
	printf("Please, enter any string: ");
	fflush(stdin);   fflush(stdout);
	gets(st1);
	for( i=0 ; st1[i] != 0 ; i++ ){
		st2 [i] = st1 [i];
	}
	st2 [i]=0;
	printf("string copied is: %s",st2);


}
