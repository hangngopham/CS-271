#include<stdio.h>
#include<math.h>

int main (void) {
	int x;
	printf("Enter number: ");
	while(scanf("%d\n", &x) != EOF) {
		printf("%d is %d\n", x, isPrime(x));
	}

	//int i;
	//for(i = 2; i <= 10000; i++) {
		//if(isPrime(i)) {
			//printf("%d is prime number\n", i);
		//}
	
	//}
}

int isPrime(int num) {
	if(num == 2) {
		return 1;	
	}
	else {
		int i;
	
		for(i = 2; i < (int) sqrt(num); i++) {
			if(num % i == 0) {
				return 0;
			}
		}
		return 1;
		
	}
}

