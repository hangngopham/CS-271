// CS 271 - lab assignment #3
// lab3.c
// This is a test program
// written by Hang Ngo
// 02/10/2016

#include "lab3functions.h"
#include<stdio.h>
#include<math.h>

int main( void ){
	int i;	
	for(i = 1; i < 1000; i++) {
		printf("%d is %d\n", i, perfect(i));
	}

        int a;
	for(a = 2; a < 75; a++) {
		printf("%d is %d\n", a, prime(a));	
	}
	
	int num1, num2, num3,num4;
	printf("Enter number:\n");
        scanf("%d",&num1,"\n");
        printf("Enter  2nd number:\n");
        scanf("%d",&num2,"\n");
       	printf("Reverse number of %d is %d\n", num1, revDigits(num1));
	printf("Reverse number of %d is %d\n", num2, revDigits(num2));
     
	
	


}	
