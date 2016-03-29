// CS 271 - lab assignment #1
// written by Hang Ngo
// 01/26/2015

#include<stdio.h>

int main (void) {
  int integer1, integer2;
  int sum;

  printf( "Enter first integer\n");
  scanf( "%d", &integer1 );

  printf( "Enter second integer\n");
  scanf( "%d", &integer2 );

  sum = integer1 + integer2;

  printf( "Sum is %d\n", sum ); //display the sum

} // end function main