/*
 ============================================================================
 Name        : EX12_Checking_character_is_Alphabet_or_not.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char c;
	printf("the Alphabet ASCI Range  \na=%d-->z=%d  \nA=%d-->Z=%d",'a','z','A','Z');  //65-->90   97-->122
	while(5){
		setbuf(stdout,NULL);
		printf("\nenter a character: ");
		scanf("%c",&c);
		if( (c>='a' && c<='z') || (c>='A' && c<='Z') )  //variable (c) in if condition is to be deal as a number (ASCI)
			printf("%c is an Alphabet",c);
		else
			printf("%c is not an Alphabet",c);
	}
	return EXIT_SUCCESS;
}
