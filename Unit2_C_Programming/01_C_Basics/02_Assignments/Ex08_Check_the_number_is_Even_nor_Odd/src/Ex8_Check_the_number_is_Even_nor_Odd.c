/*
 ============================================================================
 Name        : Ex8_Check_the_number_is_Even_nor_Odd.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	while(5){
		int x;
		setbuf(stdout,NULL);
		printf("Enter a number: ");
		scanf("%d",&x);
		x%2 ? printf("Odd\n") : printf("Even\n");
	}
	return EXIT_SUCCESS;
}
