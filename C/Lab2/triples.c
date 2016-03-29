#include<stdio.h>
#include<math.h>

// CS 271 - lab assignment #2
// triples.c
// Find all Pythagorean triples for side1, side2 and hypotenuse all
// no larger than 500 with no duplicates
// written by Hang Ngo
// 02/02/2016

int main (void) {
  int side1, side2, hypotenuse; // declare variables
  
  //print the label of the table
  printf("%6s%10s%14s\n", "Side 1", "Side 2", "Hypotenuse");
  printf("%6s%10s%14s\n", "------", "------", "----------");  
  
  // Check if side1, side2 and hypotenuse are values of 
  // Pythagorean triples with all no larger than 500 
  // with no duplicates   
  for(side1 = 1; side1 < 500; side1++) {
    for(side2 = side1; side2 < 500; side2++) {
      for(hypotenuse = 1; hypotenuse < 500; hypotenuse++) {
	
	  if(side1*side1+side2*side2==hypotenuse*hypotenuse) {
            // print output
	    printf("%6d%10d%14d\n", side1, side2, hypotenuse);
	  }
      }
    }
   }
  
  
}
