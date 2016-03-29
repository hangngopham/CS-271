// CS 271 - lab assignment #2
// coffee.c
// Find the maximum and minimum coffee prices over a 10 year period
// (2005-2014)
// written by Hang Ngo
// 02/04/2016

#include<stdio.h>
#include<math.h>

int main(void) {
  int month, monthMin, monthMax, year, yearMax, yearMin; // declare variable
  double price, min=400, max; // declare variables

  scanf("%d", &month); // Input month
  scanf("%d", &year); // Input year
  scanf("%lf", &price); // Input price
 
  // The loop will loop through all the data in data1.txt and 
  // stops with a line with the sentinel value -1
  while(month != -1) {
    scanf("%d", &month); // Input month
    scanf("%d", &year); //Input year
    scanf("%lf", &price); // Input price
    
    // Chek if the price is max or min
    if(price > max) {
      max = price;
      yearMax = year;
      monthMax = month;
    }
    else if(price < min) {
      min = price;
      yearMin = year;
      monthMin = month;
    }
  }
  
  // print the maximum price with month and year
  printf("Maximum price $ %.2f %d %d\n", max, monthMax, yearMax);

  // print the minumum price with month and year
  printf("Minimum price $  %.2f %d %d\n", min, monthMin, yearMin);
 

}
