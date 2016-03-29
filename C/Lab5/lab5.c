#include<stdio.h>
#include<math.h>
// write the prototype for a function called swap1 that accepts two
// integers as parameters. The function will swap the two parameters.
// The function will not return anything.
void swap1(int num1, int num2);

// write the prototype for a function called swap2 that accepts two
// integer pointers as parameters. The function will swap the contents
// of the two addresses.The function will not return anything.
void swap2(int *num1, int *num2);

// write the prototype for a function called maximum. The function
// will accept two parameters: a pointer to a float, and an integer.
// The integer represents the size of an array and the float pointer
// is the address of the first array element.
// The function will find and return the maximum value in the array.
float maximum(float *array, int size);

// start the main function
int main(void) {

// define an array of integers called values with 5 elements
	int values[5];

// using a for loop, assign the even integers 2 to 10 to the
// array elements
	int i, n = 2;
	for(i = 0; i < 5; i++) {
		values[i]= n;
		n = n + 2;
	}

// declare an integer named x and initialize it to 1
	int x = 1;

// declare an integer named y and initialize it to 2
	int y = 2;

// call the swap1 function using parameters values[x] and values[y]
	swap1(values[x],values[y]);

// print a message "After the first swap:\n".
// using a for loop, print the contents of the array values,
// all on one line
// print a blank line
	printf("After the first swap:\n");
	int a;
	for(a = 0; a < 5; a++) {
		printf("%d ", values[a]);
	}
	printf("\n");

// define a pointer named aPtr that points to an object of type int
// assign the starting address of the array values to aPtr
	int *aPtr = values;

// define a pointer named vPtr that points to an object of type int
// assign vPtr the address of values[1]
	int *vPtr;
	vPtr = &values[1];

// define a pointer named wPtr that points to an object of type int
// assign wPtr the address of values[2]
	int *wPtr;
	wPtr = &values[2];

// call the swap2 function using parameters vPtr and wPtr
	swap2(vPtr, wPtr);

// print a message "After the second swap:\n".
// using a for loop, print the contents of the array values,
// all on one line
// print a blank line
	printf("After the second swap:\n");
	int b;	
	for(b = 0; b < 5; b++) {
		printf("%d ", values[b]);
	}
	printf("\n");
	
// print a message "Using Pointer/Offset Notation:\n"
// using a for loop and pointer/offset notation, print the contents
// of the array values, all on one line
	printf("Using Pointer/Offset Notation:\n");
	int j;
        size_t offset;
	for(offset = 0; offset < 5; offset++) {
		printf("*(aPtr+%u) = %d\n",offset, *(aPtr+offset));
		
	}
	printf("\n");

// print a message "Using Pointer subscripting:\n"
// using a for loop and pointer subscripting, print the contents
// of the array values, all on one line
	printf("Using Pointer subscripting:\n");

// print aPtr (with an informative message)
	printf("aPtr is %p\n", aPtr);

// print aPtr + 3 (with an informative message)
	printf("aPtr + 3 is %p\n", aPtr + 3);

// print the value stored at aPtr + 3 (with an informative message)
	printf("The value stored at aPtr + 3 is %d\n", *(aPtr + 3));

// declare an array called list with 10 elements of type float
// using a for loop, input numbers from the user and store them
// in the array list
	float list[10];
	
	int c;
	for(c = 0; c < 10; c++) {
		scanf("%f",&list[c]);
		
	}

// call the maximum function with the array list and 10. Store the
// return value in a variable called max.
// print max (with an informative message)
	float max = maximum(list,10);
	printf("The maximum value is: %.2f\n", max);
} // end the main function


// write the definition of the swap1 function (see the description
// above)
void swap1(int num1, int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;
}

// write the definition of the swap2 function (see the description
// above)
void swap2(int *num1, int *num2) {
	int temp = *num1;
	*num1 = *num2;
	*num2 = temp;
}

// write the definition of the maximum function (see the description
// above)
float maximum(float *array, int size) {

	float max1 = *array;
      
	int i;
	for(i = 0; i < size; i++) {
		if(*(array+i) > max1) {
			max1 = *(array+i);
		}
	}
       
	return max1;
}

