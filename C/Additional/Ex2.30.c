#include<stdio.h>
#include<math.h>

int main (void) {
   int num, num1, num2, num3, num4, num5, num6, num7, num8, num9;
   //char number;

   printf("Enter number\n");
   scanf("%d", &num);

   num1 = num/10000;
   num2 = num%10000;

   num3 = num2/1000;
   num4 = num2%1000;

   num5 = num4/100;
   num6 = num4%100;

   num7 = num6/10;
   num8 = num6%10;

   num9 = num8/1;
	
   printf("%d   %d   %d   %d   %d\n", num1, num3, num5, num7, num9);
   
}
