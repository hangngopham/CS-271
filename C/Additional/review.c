#include<stdio.h>
#include<math.h>
int main(void) {
	int num, sum = 0 , count;
	double avg;
	scanf("%d", &num);
	while(num != 9999) {
		sum = sum + num;
		count++;
		scanf("%d", &num);
	}
	avg = (double)sum/(double)count;
	printf("Average is %f\n", avg);
}
