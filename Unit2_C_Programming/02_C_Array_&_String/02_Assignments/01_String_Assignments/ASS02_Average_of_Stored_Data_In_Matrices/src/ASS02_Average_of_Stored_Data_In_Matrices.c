/*
 ============================================================================
 Name        : ASS02_Average_of_Stored_Data_In_Matrices.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,c;
	float average=0;
	try:
	printf("Enter the number of Data You Want to Insert: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&n);
	if(n==0){
		printf("No Value Try again \n");
		goto try;
	}
	float arr[n];
	for( c=0 ; c<n ; c++ ){
		printf("%d) ",c+1);
		fflush(stdin);   fflush(stdout);
		scanf("%f",&arr[c]);
	}
	for( c=0 ; c<n ; c++ )
		average += arr[c];
	average /= n;
	printf("The Average of those numbers is: %0.2f",average);
}
