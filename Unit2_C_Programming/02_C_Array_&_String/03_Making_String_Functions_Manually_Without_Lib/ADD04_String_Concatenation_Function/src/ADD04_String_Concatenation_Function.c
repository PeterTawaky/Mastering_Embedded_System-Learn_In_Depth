/*
 ============================================================================
 Name        : ADD04_String_Concatenation_Function.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : this code to concatenate to string in one of them which represent the function strcat(); in <string.h> Lib
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>
#include <string.h>  //to use function strlen();

int main(void) {
	int i;
	char str1 [50];  //large size to concatenate another word inside it
	char str2 [50];
	printf("Enter Your First Name: ");
	fflush(stdin);  fflush(stdout);
	gets(str1);
	printf("Enter Your Last Name: ");
	fflush(stdin);  fflush(stdout);
	gets(str2);
	str1 [strlen(str1)] = ' ';  //changing the (NULL) by (space) to be able to add the second string
	for(i=0 ; str2[i] != 0 ; i++){  //Adding each character in (string_2) to (String_1)
		str1 [strlen(str1)]= str2[i];
	}
	str1 [strlen(str1)]= '\0'; //adding (0) again (NULL) to make a string End
	printf("%s",str1);
}
