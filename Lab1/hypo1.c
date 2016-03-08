// CS 271 Assignment
// Written by Hang Ngo
// 01/26/2016

#include<stdio.h>
#include<math.h>

int main (void) {
	int x;
	printf("Enter number: ");
	while(scanf("%d\n", &x) != EOF) {
		printf("%d is %s\n", x, isPrime(x) ? "not prime" : 			"prime");
	}
}

int isPrime(int num) {
	if(num == 2) {
		return 1;	
	}
	else {
		int i = 2;
		double result = sqrt(num);
		while(i <= result) {
			if(num % i == 0) {
				return 0;
				break;			
			}
			else {
				return 1;
			}
		i++;
		}	
	}
}


