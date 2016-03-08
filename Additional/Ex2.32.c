#include<stdio.h>

int main (void) {
  double weight, height, bmi;
  
  printf("Enter weight\n");
  scanf("%lf\n", &weight);
  
  printf("Enter height\n");
  scanf("%lf\n", &height);
  
  bmi = weight/(height*height);
  
  
  if (bmi < 18.5) {
    printf("BMI VALUES:");
    printf("Underweight: less than 18.5\n");
  }
  else if (bmi >= 18.5 && bmi < 24.9) {
    printf("BMI VALUES:");
    printf("Normal: between 18.5 and 24.9\n");
  }
  else if (bmi >= 25 && bmi < 29.9) {
    printf("BMI VALUES:");
    printf("Overweight: between 25 and 29.9\n");
  }
  else {
    printf("BMI VALUES:");
    printf("Obese: 30 or greater\n");
  }
  
}