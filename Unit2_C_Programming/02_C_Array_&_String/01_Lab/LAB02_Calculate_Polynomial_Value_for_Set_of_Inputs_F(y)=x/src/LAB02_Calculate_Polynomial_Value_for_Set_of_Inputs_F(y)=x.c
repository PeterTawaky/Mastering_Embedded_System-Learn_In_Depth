/*
 ============================================================================
 Name        : LAB02_Calculate_Polynomial_Value_for_Set_of_Inputs_F(y)=x.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : you can Clone any time
 Description : Hello World in C, Ansi-style
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i;
	float y , x[]={5,16,22,3.5,15};
	for(i=0;i<5;i++){
		y = 5 * x[i] * x[i] + 3  * x[i] + 2;
		printf("%0.2f \n",y);
	}
}
