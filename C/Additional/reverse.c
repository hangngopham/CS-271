#include<stdio.h>
#include<math.h>

int main(void){
	int num1, num2, num3;
	printf("Enter number:\n");
	scanf("%d", &num1);
	printf("Reverse of %d is %d\n", num1, revDigits(num1));
}

int revDigits(int x) {
	int reverse;
	while(x != 0) {
		reverse = reverse*10;
		reverse = reverse + x %10;
		x = x/10;
	}
	return reverse;
}
