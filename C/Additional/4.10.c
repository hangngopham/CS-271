#include<stdio.h>
#include<math.h>

int main(void) {
  	int count = 1, sum, num;
	float avg;
	scanf("%d", &num);
	while(num != 9999) {
                scanf("%d", &num);
		count++;
		sum+=num;
	}
	avg = sum/num;
	
	printf("Sum is %d\n", sum);
	printf("Average is %f\n", avg);
	printf("Count is %d\n", count);
	

}
