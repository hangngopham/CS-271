#include<stdio.h>
#include<math.h>

int main ( void ) {
	number(99);
	
}

void number(int x) {
	switch(x) {
		
		case 11:
		case 19:
			switch(x%2){
				case 0:
				printf("group A\n");
				break;
			}
		break;
	
		case 12:
		case 20:
			switch(x%2){
				case 0:
				break;
			printf("group B\n");
			break;
			}
		break;	

		default:
			printf("neither group\n");
			break;
	}

	return;
}
