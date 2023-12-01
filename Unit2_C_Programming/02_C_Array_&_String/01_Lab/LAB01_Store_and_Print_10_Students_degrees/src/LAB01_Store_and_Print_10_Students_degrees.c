/*
 ============================================================================
 Name        : LAB01_Store_and_Print_10_Students_degrees.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i;
	printf("Enter the number of Degrees You want to enter: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&n);
	float degrees [n];
	for(i=0;i<n;i++){
		printf("enter student %d degrees: ",i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%f",&degrees[i]);
	}
	for(i=0;i<n;i++){
		printf("degree %d) %0.1f",i+1,degrees [i]);
		printf("\n");
	}
}
