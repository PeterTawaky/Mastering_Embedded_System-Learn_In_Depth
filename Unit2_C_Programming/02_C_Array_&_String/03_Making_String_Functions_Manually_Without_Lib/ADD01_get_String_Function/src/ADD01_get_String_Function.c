/*
 ============================================================================
 Name        : ADD01_get_String_Function.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : you can Fork any time
 Description : this function is used to get all the string that the user entered even there is a spaces between words
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	char c , name [30];
	printf("Please enter your full name: ");
	fflush(stdin);  fflush(stdout);  //can't enter the loop (MAKE ERROR WITH \n)
	for (i=0 ; c != '\n' ; i++){
		scanf("%c",&c);
		name [i] = c;
	}
	name[i] = 0 ; //put end to the string
	printf("%s",&name[0]);
}
