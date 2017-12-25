
#include <stdio.h>
#include <stdlib.h>

int main(){
	int a[] = {0, 1, 2, 3, 4, 5};
	int *p[] = {a, a+1, a+2, a+3, a+4};
	int **pp = p;
	printf("*p[2] = %d\n",*p[2]);
	printf("**p = %d\n",**p);
	printf("*((*pp+2)+2) = %d\n",*(*(pp+2)+2));	
	return 0;
}
