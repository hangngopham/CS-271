#include<stdio.h>
#include<math.h>
#include<time.h>
#include "arrayfunctions.h"

int main(void) {
	printf("Problem 1\n");
	int arr[20];
	fillInteger(arr, 20, -20, 20);
	int n = 10;
	int i;
	for(i = 0; i < 20; i++) {
		printf("%d	",arr[i]);
		if((i+1)%n == 10) {
			printf("\n");
		}
	}
	findConsecutive(arr,20);


	printf("Problem 2");
	char charArr[50];
	fillCharacter(charArr, 50, "a", "z");
	int j;
	for(j = 0; j < 50; j++) {
		printf("%c ",charArr[j]);
	}
	findTriples(charArr, 50);

	printf("Problem 3");
	float floatArr[10];
	fillFloat(floatArr, 10, 1.0, 50.0);
	int k;
	for(k = 0; k < 10; k++) {
		printf("%lf  ", floatArr[k]);
	}
	printf("%lf",floatMean(floatArr, 10);

	printf("%lf",floatMin(floatArr, 10);

	printf("%lf",floatMax(floatArr, 10);
}
