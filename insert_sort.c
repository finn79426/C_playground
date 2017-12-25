
#include <stdio.h>
#include <stdlib.h>

void list(int *ary);
void inserting(int *ary);

int main(){
	/* init */	
	int ary[21],i;
	ary[0] = -1;
	for(i=1; i<=20; i++)
		ary[i] = rand() % 100 + 1;

	printf("Source array...\n");
	list(ary);

	inserting(ary);

	printf("After inserting...\n");
	list(ary);
}

void list(int *ary){
	int i;
	for(i=1; i<21; i++){
		printf("%5d",ary[i]);
		
		if((i % 5) == 0)
			printf("\n");
	}
}

void inserting(int *ary){
	int i,j,temp;
	for(i=2; i<=20; i++){
		temp = ary[i];
		for(j=i; ary[j-1]>=temp; j--)
			ary[j] = ary[j-1];
		ary[j] = temp;
	}
}
