/*
 ============================================================================
 Name        : Transpose.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int arr [3] [3] , Tarr [3] [3] , R , C ;
	printf("enter a matrix (3x3) \n");
	for(R=0;R<3;R++){
		for(C=0;C<3;C++){
			printf("Arr [%d][%d]: ",R,C);
			fflush(stdin); fflush(stdout);
			scanf("%d",&arr[R][C]);
		}
	}

	for(R=0;R<3;R++){
		for(C=0;C<3;C++){
			printf("%d\t", arr[R][C]);
		}
		printf("\n");
	}
	printf("======================\n");
	for(R=0;R<3;R++){
		for(C=0;C<3;C++){
			Tarr[R][C]= arr[C][R];
		}
	}

	for(R=0;R<3;R++){
			for(C=0;C<3;C++){
				printf("%d\t", Tarr[R][C]);
			}
			printf("\n");
		}
}
