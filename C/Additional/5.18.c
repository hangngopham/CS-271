#include<stdio.h>

int main( void ) {
	int num;
	printf("Enter number: ");
	while (scanf("%d", &num) == 1) {
		printf("%d is %d\n", num, even(num)); 
	}

	
}

int even(int num) {
	if(num%2 == 0) {
		return 1;		
	}	
	else {
		return 0;
	}
}
