#include "arrayfunctions.h"

void fillInteger(int a[], int length, int min, int max) {
	srand(time(NULL));
	
	int i;
	for(i = 0; i < lenght; i++) {
		int num = rand()%(max-min+1) + min;
		a[i] = num;
	}

}

void fillCharacter(char c[], int length, char start, char end){
	srand(time(NULL));
	
	int i;
	for(i = 0; i < length; i++) {
		char character = rand()%(end-start+1) + start;
		c[i] = character;
	}
}

void findConsecutive(int array[], int length) {
	int i;

	for(i = 0; i< length; i++) {
		if(array[i+1]-array[i] == 1) {
			printf("Elements %d and %d are consecutive.\n", array[i], array[i+1]);
		}
	}
	
}

void findTriples(char c[], int length) {
	int i;
	for(i = 0; i < length; i++) {
		if(c[i+2] - c[i+1] == 1 && c[i+1] - c[i] == 1) {
			printf("%c%c%c\n",c[i], c[i+1], c[i+2]);
		}
	}
}

void fillFloat(float a[], int length, float min, float max) {
	srand(time(NULL));
	
	int i;
	float floatNum;
	for(i = 0; i < length; i++) {
		floatNum = (rand()%(int)(max-min+1)) + min;
		a[i] = floatNum;
	}
}

float floatMean(float arr[], int length) {
	int i;

	float total = 0, mean;

	for(i = 0; i < length; i++) {
		total = total + arr[i];
	}
	mean = total/(float)length;

	return mean;
}

float floatMin(float array[], int length) {
	float min = array[0];

	int i;

	for(i = 0; i < length; i++) {
		if(array[i] < min) {
			min = array[i];
		}
	}

	return min;
}

float floatMax(float array[], int length) {
	int i;
	float max = array[0];

	for(i = 0; i < length; i++) {
		if(array[i] > max) {
			max = array[i];
		}
	}
	
	return max;
}
