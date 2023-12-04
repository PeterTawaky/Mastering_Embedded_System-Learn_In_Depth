/*
 ============================================================================
 Name        : ADD07_String_Compare_Ignoring_Letters_Case.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : Comparing Two Strings Ignoring you entered capital or small letters & Without Changing the Original Strings
 ============================================================================
 */

#include <stdio.h>
#include <stdlib.h>

int main(void) {
	char str1 [20];
	char str2 [20];
	char temp_str1[20];
	char temp_str2[20];
	int i;
	printf("string 1: ");
	fflush(stdin);   fflush(stdout);
	gets(str1);
	printf("string 2: ");
	fflush(stdin);   fflush(stdout);
	gets(str2);
	//copy the two strings to another to strings to change their case letters
	for(i=0;str1[i]!=0;i++)
		temp_str1[i]=str1[i];
	temp_str1[i]='\n'; //adding NULL
	for(i=0;str2[i]!='\0';i++)
		temp_str2[i]=str2[i];
	temp_str2[i]='\n'; //Adding NULL
	//Changing the two Temp_strings to LWR Case Letter
	for(i=0;temp_str1[i]!=0;i++){
		if(temp_str1[i]>='A' && temp_str1[i]<='Z'){
			temp_str1[i]+='a'-'A';
		}
	}
	for(i=0;temp_str2[i]!=0;i++){
		if(temp_str2[i]>='A' && temp_str2[i]<='Z'){
			temp_str2[i]+='a'-'A';
		}
	}
	//comparing two strings in same case
	for(i=0 ; temp_str1[i] != 0 || temp_str2[i] != 0 ; i++){
		if( temp_str1[i] != temp_str2[i] ){
			i=0;
			break;  //if u realize any different
		}
	}
	(i == 0) ? printf("the two Strings are Different") : printf("the two Strings are the Same");
}
