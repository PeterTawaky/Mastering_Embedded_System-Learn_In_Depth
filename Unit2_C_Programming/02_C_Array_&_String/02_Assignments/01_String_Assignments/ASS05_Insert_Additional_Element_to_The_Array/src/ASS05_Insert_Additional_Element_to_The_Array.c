/*
 ============================================================================
 Name        : ASS05_Insert_Additional_Element_to_The_Array.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int n,i,a,l,j;
	printf("Enter the number of Elements: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&n);
	int arr [n];
	int narr [n+1];
	printf("Now Insert Elements: \n");
	for(i=0;i<n;i++){
		printf("%d) ",i+1);
		fflush(stdin);   fflush(stdout);
		scanf("%d",&arr[i]);
	}
	for(i=0;i<n;i++){
		printf("%d  ",arr[i]);
	}
	printf("\nnow enter the Additional Element: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&a);
	printf("now enter it's Location: ");
	fflush(stdin);   fflush(stdout);
	scanf("%d",&l);
	//now Initialize the new Array
	for(i=0,j=0 ; j<(n+1) ; j++){
		if(j+1==l){
			narr[j]=a;
			
		}
		else{
			narr[j]=arr[i];
			i++;
		}
	}
	for(i=0;i<(n+1);i++){
		printf("%d  ",narr[i]);
	}
}
