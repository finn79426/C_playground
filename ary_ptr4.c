
#include <stdio.h>
#include <stdlib.h>

int main(){
	int ary[3][4] = {{1,2,3,4}, {5,6,7,8}, {9,10,11,12}};
	int *ptr[3] = {ary[0], ary[1], ary[2]};
	int i;

	printf("\n");
	for(i=0; i<3; i++)
		printf("*ptr[%d] = %d, **(ptr+%d)=%d\n", i, *ptr[i], i, **(ptr+i));	
	return 0;
}
