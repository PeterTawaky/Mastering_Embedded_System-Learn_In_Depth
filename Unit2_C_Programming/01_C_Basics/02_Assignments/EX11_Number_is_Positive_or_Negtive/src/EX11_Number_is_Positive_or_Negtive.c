/*
 ============================================================================
 Name        : EX11_Number_is_Positive_or_Negtive.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	  float x;
	  setbuf(stdout,NULL);
	  printf("Please, enter a number: ");
	    scanf("%f",&x);
	    if(x>0)
	        printf("Positive");
	    else if (0>x)
	        printf("Negative");
	    else
	        printf("Zero");
	    return EXIT_SUCCESS;
}
