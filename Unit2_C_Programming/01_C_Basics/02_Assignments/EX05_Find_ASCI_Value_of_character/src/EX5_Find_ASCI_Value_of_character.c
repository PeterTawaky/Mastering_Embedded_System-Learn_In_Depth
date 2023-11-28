/*
 ============================================================================
 Name        : EX5_Find_ASCI_Value_of_character.c
 Author      :
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char x;
	setbuf(stdout,NULL);
	printf("Enter any character: ");
	    scanf("%c",&x);
	    printf("%c=%d",x,x);
	    return EXIT_SUCCESS;
}
