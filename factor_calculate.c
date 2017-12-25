#include <stdio.h>
#include <stdlib.h>

int main(){
	int number;
	printf("Input a number:");
	scanf("%d",&number);
	
	if (number % 2 == 0){
		printf("2的倍數\n");
	}
	if (number % 3 == 0){
		printf("3的倍數\n");
	}
	if (number % 5 == 0){
		printf("5的倍數\n");
	}


	return 0;
}
