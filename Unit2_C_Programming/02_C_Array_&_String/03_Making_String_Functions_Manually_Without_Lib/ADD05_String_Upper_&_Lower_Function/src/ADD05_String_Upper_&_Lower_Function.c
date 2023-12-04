/*
 ============================================================================
 Name        : ADD05_String_Upper_&_Lower_Function.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : Controlling Letters Capital or small
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char upper_str [10];
	char lower_str [10];
	int i;
	printf("Please, enter a Word with Capital Letters:  ");
	fflush(stdin);   fflush(stdout);
	scanf("%s",lower_str);
	printf("Please, enter a Word with Small Letters:  ");
	fflush(stdin);   fflush(stdout);
	scanf("%s",upper_str);
	printf("====================================\n");
	//change from capital to small
	for(i=0 ; lower_str[i] != '\0' ; i++){
		if(lower_str[i] >= 'A' && lower_str[i] <= 'Z'){
			lower_str[i] += 'a'-'A';
		}
	}
	//change from small to capital
	for(i=0 ; upper_str[i] != '\0' ; i++){
		if(upper_str[i] >= 'a' && upper_str[i] <= 'z'){
			upper_str[i] -= 'a'-'A';
		}
	}
	printf("change from capital to small: %s\n",lower_str);
	printf("change from small to capital: %s",upper_str);

}
