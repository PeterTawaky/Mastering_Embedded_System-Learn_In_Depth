/*
 ============================================================================
 Name        : EX2_Print_an_Integer_Inserted_by_User.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	  int x;
	  setbuf(stdout,NULL);
	  printf("Enter an Integer number: ");
	    scanf("%d",&x);
	    printf("You entered number: %d",x);
	    return EXIT_SUCCESS;
}
