/*
 ============================================================================
 Name        : ASS06_Searching_For_Element.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,e;
	printf("Enter the number of Elements: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&n);
	int arr [n];
	printf("Now Insert Elements: \n");
	for(i=0;i<n;i++){
		printf("%d) ",i+1);
		fflush(stdin);   fflush(stdout);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	printf("\nnow enter the Element you want to Search: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&e);
	// Searching Algorithm
	for(i=0;i<n;i++){
		if(e==arr[i]){
			printf("number %d found at location %d",e,i+1);
			return 0;
		}
	}
	printf("Number %d is not Found",e);
}

