#include<stdio.h>

int main (void) {
  int num;

  printf("Enter number\n");
  scanf("%d", &num);
  
  if(num % 2 == 0) {
    printf("%d is even\n", num);
  }
  else {
    printf("%d is odd\n", num);
  }
}
