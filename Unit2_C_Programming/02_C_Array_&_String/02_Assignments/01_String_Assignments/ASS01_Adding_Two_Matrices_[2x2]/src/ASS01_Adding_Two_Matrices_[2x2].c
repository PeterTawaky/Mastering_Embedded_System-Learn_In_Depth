/*
 ============================================================================
 Name        : ASS01_Adding_Two_Matrices_[2x2].c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int r,c;
	float m1 [2][2];  //2x2= 4_Elements
	float m2 [2][2];
	float sum_m [2][2];
	printf("Please,Enter the Elements of the first Matrix: \n");
	for( r=0 ; r<2 ; r++ ){
		for( c=0 ; c<2 ; c++ ){
			printf("m1 [%d][%d]: ",r,c);
			fflush(stdin);   fflush(stdout);
			scanf("%f",&m1[r][c]);
		}
	}
	printf("Please,Enter the Elements of the Second Matrix: \n");
	for( r=0 ; r<2 ; r++ ){
		for( c=0 ; c<2 ; c++ ){
			printf("m2 [%d][%d]: ",r,c);
			fflush(stdin);   fflush(stdout);
			scanf("%f",&m2[r][c]);
		}
	}
	//now we will add them
	for( r=0 ; r<2 ; r++ ){
			for( c=0 ; c<2 ; c++ ){
				sum_m [r] [c] = m1 [r] [c] + m2 [r] [c] ;
			}
		}
	//print the result
	printf("The Sum of Matrices: \n");
	for( r=0 ; r<2 ; r++ ){
				for( c=0 ; c<2 ; c++ ){
					printf("%0.2f\t",sum_m[r][c]);
				}
				printf("\n\n");
			}
}
