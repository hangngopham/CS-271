// CS 271 - lab assignment #3
// lab3functions.c
// This program includes the implementation of three functions
// written by Hang Ngo
// 02/10/2016

#include "lab3functions.h"

// This functin check whether the parameter num is a perfect 
// number or not, which means that its factor, inclduing 1
// (but nor the number itself sum to the number num.
int perfect(int num) {
	int sum = 0;
	int i;
	for(i = 1; i < num; i++) {
		if(num % i == 0) {
			sum = sum + i;
		}
	}

	if(sum == num) {
		return 1;
	}
	else {
		return 0;
	}
} // end function


int prime(int n) {
	if(n == 2) {
		return 0;
	}
	else {
		int x;
		for(x = 2; x <= (int) sqrt(n); x++) {
			if(n % x == 0) {
				return 0;
			}
		}
		return 1;
	}
} // end function

int revDigits(int x) {
	int reverse = 0;
	while(x != 0) {
		reverse = reverse*10;
		reverse = reverse + x %10;
		x = x/10;
	}
       
	return reverse;
}
