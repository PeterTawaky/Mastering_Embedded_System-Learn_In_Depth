/*
 ============================================================================
 Name        : ASS03_Transpose_of_Any_Size_2D_Matrix.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int R , C , i , j ;
	//determine the size
	printf("Enter the number of Rows: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&R);
	printf("Enter the number of Columns: ");
	fflush(stdin); fflush(stdout);
	scanf("%d",&C);
	int matrix [R][C];
	int tmatrix [C][R];
	//getting matrix Initialized
	printf("enter the matrix (Elements): \n");
	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			printf("Element [%d][%d]: ",i,j);
			fflush(stdin); fflush(stdout);
			scanf("%d",&matrix[i][j]);
		}
	}

	for(i=0;i<R;i++){
		for(j=0;j<C;j++){
			printf("%d\t", matrix [i][j]);
		}
		printf("\n");
	}
	printf("======================\n");
	//Initializing the Transpose Matrix
	for( i=0 ; i<R ; i++ ){
		for( j=0 ; j<C ; j++ ){
			tmatrix[j][i]= matrix[i][j];  //watch the order of i & j carefully
		}
	}
	printf("The Matrix Transpose: \n");
	for(i=0;i<C;i++){
		for(j=0;j<R;j++){
			printf("%d\t", tmatrix[i][j]);
		}
		printf("\n");
	}
}
