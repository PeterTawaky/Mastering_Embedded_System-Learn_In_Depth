/*
 ============================================================================
 Name        : ADD08_String_Array_to_Integer.c
 Author      : Peter Tawaky
 Version     :
 Copyright   : Feel Free to Fork at Any Time
 Description : Convert numbers saved as a character to be integers ready for any Operations exactly as function--->atoi();
 ============================================================================
 */
#include <stdio.h>
#include <stdlib.h>

int main(void) {
	int i,x,y=0;
	char arr [15];
	printf("enter your Digits: ");
	fflush(stdin);   fflush(stdout);
	scanf("%s",arr);
	// '1'-->49  so the diff between the number's ASCII & It's Value in Integer is: 48  ('1'-1=48)
	for(i=0;arr[i]!=0;i++){
		if(arr[i]>=48 && arr[i]<=57){
			x = (int) arr[i] - ('1'-1) ;
			y = (y*10) + x ;
		}
		else
			break;
	}
	printf("%d",y);
}
/* '0'-->48
 * '1'-->49
 * '2-->50
 * '3'-->51
 * '4'-->52
 * '5'-->53
 * '6'-->54
 * '7'-->55
 * '8'-->56
 * '9'-->57
 */
