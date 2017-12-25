
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i;
	int ary[6];
	for (i=0; i<6; i++){
		ary[i] = rand() % 6+1;
		printf("%2d",ary[i]);
	}
	return 0;
}
