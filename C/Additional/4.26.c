#include<stdio.h>

int main( void ) {
	double pi = 0, x;
	int step = 0;

	printf("Step\tValue of pi\n");

	for(x = 1; x <= 1000001; x+=2) {
		if(step % 2 != 0) {
			pi = pi-(4/x);
		}
		else {
			pi = pi+(4/x);
		}
		step++;
		printf("%-4d\t%-11lf\n", step, pi);
	}
	return 0;
	
	
}
