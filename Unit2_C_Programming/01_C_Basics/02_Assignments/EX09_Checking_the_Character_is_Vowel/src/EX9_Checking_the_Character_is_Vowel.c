/*
 ============================================================================
 Name        : EX9_Checking_the_Character_is_Vowel.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,v=0;
	char c,vowel[]={"aeiouAEIOU"};
	setbuf(stdout,NULL);
	printf("Enter a Character: ");
	scanf("%c",&c);
	for(i=0;i<10;i++){
		if(c == vowel[i]){
			v=1;
			break;
		}
	}
	v? printf("Vowel") : printf("Constant");
	return EXIT_SUCCESS;
}
