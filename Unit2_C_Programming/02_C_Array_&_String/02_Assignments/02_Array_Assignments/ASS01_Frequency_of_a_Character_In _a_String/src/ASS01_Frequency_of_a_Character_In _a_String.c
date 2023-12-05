/*
 ============================================================================
 Name        : ASS01_Frequency_of_a_Character_In.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : How Much a Character Repeated in a String
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str [50];
	char c;
	int i,count=0;
	printf("Enter any String: \n");
	fflush(stdin);   fflush(stdout);
	gets(str);
	printf("Enter a Character: ");
	fflush(stdin);   fflush(stdout);
	scanf("%c",&c);
	for( i=0 ; str[i] != 0 ; i++ ){
		if(str[i] == c)
			count++;
	}
	printf("Character %c Frequency is: %d ",c,count);

}
