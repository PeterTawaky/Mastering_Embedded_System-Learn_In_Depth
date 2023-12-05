/*
 ============================================================================
 Name        : ASS04_Editing_an_Element_In_Array.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,e,l;
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
	printf("\nnow enter the Edited Element: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&e);
	printf("now enter it's Location: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&l);
	//apply the edit in the Array
	arr[l-1]=e;
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
}
