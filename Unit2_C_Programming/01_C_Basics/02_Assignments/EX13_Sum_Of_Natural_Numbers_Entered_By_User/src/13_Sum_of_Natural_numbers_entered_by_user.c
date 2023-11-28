/*
 ============================================================================
 Name        : 13_Sum_of_Natural_numbers_entered_by_user.c
 Author      : 
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	  int n,i,sum=0;
	  setbuf(stdout,NULL);
	  printf("how many numbers you want to enter: ");
	    scanf("%d",&n);
	    int A[n];
	    //loop to enter numbers
	    for(i=0;i<n;i++){
	        printf("%d)",i+1);
	        scanf("%d",&A[i]);
	    }
	    //loop for sum
	    for(i=0;i<n;i++)
	        sum+=A[i];
	    printf("Sum is:%d",sum);
	    return EXIT_SUCCESS;
}
