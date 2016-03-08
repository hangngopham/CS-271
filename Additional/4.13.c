#include<stdio.h>
#include<math.h>

int main(void){
	int product = 1;
	int i = 1;
	
	//while(i < 16) {
	//	product = product*i;
	//	i = i + 2;
	//}
	for(i = 1; i < 16; i+=2) {
		product = product*i;
	}

	printf("The product of the odd integers from 1 to 15 is %d\n", product);
}


