// CS 271 - lab assignment #4
// arrayfunctions.c
// This program includes the implementation of eight functions
// written by Hang Ngo
// 02/10/2016

#include "arrayfunctions.h"

// Fill the array with random integers between 
// min  and max (inclusive). Assume that min is less than max
void fillInteger(int a[], int length, int min, int max) {
	srand(time(NULL));
	
	int i;
	for(i = 0; i < length; i++) {
		int x = rand()%(max-min+1) + min;
		a[i] = x;
	}
}

// Fill the array with random characters between start and end
// (inclusive). Assume that start is alphabetically before end
void fillCharacter(char c[], int length, char start, char end) {
	srand(time(NULL));
	
	int i;
	for(i = 0; i < length; i++) {
		char randChar = rand()%(end-start+1) + start;
		c[i] = randChar;	
	}
}

// Examine the array. If any 2 elements are consecutive integers,
// print a message giving the array subsrcipts of the 2 elements
void findConsecutive(int array[], int length) {
	int i;
	for(i = 0; i < length; i++) {
		if(array[i+1] - array[i] == 1) {
			printf("Elements %d and %d are consecutive.\n", i, i+1);
		}
	}
}

// Examine the array. If any 3 sequential elements form an
// alphabetic sequece, print a message with the 3 characters
void findTriples(char c[], int length) {
	int i;
	for(i = 0; i < length; i++) {
		if((c[i+2] - c[i+1] == 1) && (c[i+1] - c[i] == 1)) {
			printf("%c%c%c\n", c[i], c[i+1], c[i+2]);
		}	
	}
}

// Fill the array with random float values between min and max
// (inclusive). Assume that min is less than max
void fillFloat(float a[], int length, float min, float max) {
	srand(time(NULL));
	
	int i; 
	float x;
	for(i = 0; i < length; i++) {
		x = (rand()%(int)(max-min+1)) + min;	
		a[i] = x;
	}
}

// Calculate and return the arithmetic mean of all of the elements 
// in the array
float floatMean(float array[], int length) {
	float mean, sum = 0;
	int i;
	for(i = 0; i < length; i++) {
		sum = sum + array[i];
	}
	mean = sum/length;
	return mean;
}

// Calculate and return the minimum value in the array
float floatMin(float array[], int length) {
	int i;
	float min = array[0];
	for(i = 0; i < length; i++) {
		if(array[i] < min) {
			min = array[i];
		}
	}
	return min;
}

// Calculate and return the maximum value in the array
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
