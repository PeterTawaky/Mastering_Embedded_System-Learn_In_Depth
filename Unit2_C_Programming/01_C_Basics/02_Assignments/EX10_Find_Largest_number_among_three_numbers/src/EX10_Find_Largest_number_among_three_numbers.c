/*
 ============================================================================
 Name        : EX10_Find_Largest_number_among_three_numbers.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {

    float x1,x2,x3;
    setbuf(stdout,NULL);
    printf("Enter three numbers: \n");
    scanf("%f%f%f",&x1,&x2,&x3);
    x1>x2 ? (x1>x3 ? printf("%f is the largest number",x1) : printf("%f is the largest number",x3) ) : (x2>x3 ? printf("%f is the largest number",x2) : printf("%f is the largest number",x3));
	return EXIT_SUCCESS;
}
