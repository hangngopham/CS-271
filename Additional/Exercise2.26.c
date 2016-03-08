#include<stdio.h>

int main(void) {
   int num1, num2;

   printf("Enter first number:\n");
   scanf("%d", &num1);

   printf("Enter second number:\n");
   scanf("%d", &num2);
   
   if(num1%num2 == 0) {
   	printf("The first is a multiple of the second.\n");
   }
   else {
   	printf("The first is not a multiple of the second.\n");
   }
}
