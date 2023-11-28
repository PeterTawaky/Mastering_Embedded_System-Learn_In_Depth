/*
 ============================================================================
 Name        : LAB05_Calculate_Averge_of_Students_Grades.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Your copyright notice
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int number,i;
	float grade,sum=0;
	printf("please,enter the number of Students: ");
	fflush(stdin);  fflush(stdout);
	scanf("%d",&number);
	printf("====================\n");
	printf("now start to enter the students' Grades:\n");
	for(i=0;i<number;i++){
		printf("%d) ",i+1);
		fflush(stdin);  fflush(stdout);
		scanf("%f",&grade);
		sum+=grade;
	}
	printf("==========================\n");
	printf("the Average is: %f",(sum/i));
}
