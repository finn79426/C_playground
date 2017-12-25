
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,num,temp;
	for (i=0; i<101; i++){
		temp = i;
		num = num + temp;
	}
	printf("%d",num);
	return 0;
}
