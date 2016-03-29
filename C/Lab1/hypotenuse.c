// CS 271 Assignment
// Written by Hang Ngo
// 01/26/2016

#include<stdio.h>
#include<math.h>

int main (void) {
    double leg1, leg2, hypotenuse;
    
    printf("Enter first leg\n");
    scanf("%lf", &leg1);

    printf("Enter second leg\n");
    scanf("%lf", &leg2);
    
    hypotenuse = sqrt(leg1*leg1 + leg2*leg2);

    printf("The hypotenuse is %lf\n", hypotenuse);
}
