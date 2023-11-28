/*
 ============================================================================
 Name        : LAB01_Calculate_Circle_Area_or_Circumference.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Your copyright notice
 Description : make your choice if you want to calculate area or circumference, ucan enter your choice with both upper or lower case, if your choice was wrong the program will ask u again
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	/*
	 * circle Area= 3.14159*r*r
	 * Circle Circumference= 2*3.14159*r
	 */
	float area,circumference,r;
	char choice;
	printf("Please, enter the circle Radius: ");
	fflush(stdin); fflush(stdout);
	scanf("%f",&r);
	repeate:   //label name in case of wrong choice
	printf("enter your choice to print (a for area, c for circumference): ");
	fflush(stdin); fflush(stdout);
	scanf("%c",&choice);

	//changing choice to lower case:
	if(choice>='A' && choice <='Z')
		choice = choice+'a'-'A';

	//making choice
	switch (choice){
	case 'a':
	{
		area = 3.14159*r*r;
		printf("Area of Circle with readius (%f) is: %f",r,area);
		break;
	}
	case 'c':
	{
		circumference = 2*3.14159*r;
		printf("Circumference of Circle with readius (%f) is: %f",r,circumference);
		break;
	}
	default:
	{
		printf("wrong choice\n");
		printf("Repeate your choice again\n");
		printf("===========\n");
		goto repeate;

	}
	}
}
