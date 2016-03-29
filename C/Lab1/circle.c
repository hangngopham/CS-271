// CS 271 - lab assignment #1
// written by Hang Ngo
// 01/26/2015

#include<stdio.h>
#include<math.h>

int main (void) {

  double radius, area;

  printf( "Enter radius\n"); // Display an informative prompt
  scanf( "%lf", &radius ); // Input the radius 

  //Calculate the are
  area = M_PI*(radius*radius);

  printf( "The area of the circle is %lf\n", area ); //display the area

} // end function main
