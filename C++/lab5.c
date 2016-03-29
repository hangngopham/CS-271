#include <stdio.h>
#include <stdlib.h>

void swap1(int num1, int num2);

void swap2(int *a, int *b);

int maximum(float *array, int size);

int main(void) {
	int values[5];

	int i;
	int num = 2;
	for(i = 0; i < 5; i++) {
		values[i] = num;
		num = num + 2;
	}

	int x = 1;
	int y = 2;
	
	swap1(values[x], values[y]);

	printf("After the first swap:\n");
	int j = 0;
	for(j = 0; j < 5; j++) {
		printf("%d ", values[j]);
	}
	printf("\n");

	int *aPtr = values;
	int *vPtr;
	vPtr = &values[1];
	int *wPtr;
	wPtr = &values[2];
	
	swap2(vPtr, wPtr);

	printf("After the second swap:\n");
	int k;
	for(k = 0; k < 5; k++) {
		printf("%d ", values[k]);
	}
	printf("\n");
	
	printf("Using Pointer/Offset Notation:\n");
	int a;
	for(a = 0; a < 5; a++) {
		printf("%d ", *(aPtr + i);
	}
	printf("\n");

	printf("Using Pointer Subscripting Notation:\n");
	int b;
	for(b = 0; b < 5; b++) {
		printf("%d ", aPtr[i]);
	}
	printf("\n");




}
