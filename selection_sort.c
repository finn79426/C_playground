
#include <stdio.h>
#include <stdlib.h>
#define N 20
void list(int *array); // 印出array
void swap(int *, int *);
void selection_sort(int *array);


int main(){
	/* array generator */
	int i, array[N];	
		for(i=0; i<N; i++)
			array[i] = rand() % 100 + 1;
	
	printf("\nSource array ... \n");
	list(array);
	
	selection_sort(array);
	printf("\nSorting...\n");
	list(array);
	return 0;
}

void list(int *array){
	int i;
	for(i=0; i<N; i++){
		printf("%8d",array[i]);

		if( ( (i+1) % 5) == 0)
				printf("\n");
	}
}

void selection_sort(int *array){
	int i,scan_pot,min_pot;
	for(i=0; i<N; i++){
		for(scan_pot=min_pot=i,scan_pot++; scan_pot<N; scan_pot++)
			if(array[scan_pot] < array[min_pot])
				min_pot = scan_pot;
	swap(&array[min_pot],&array[i]);
	}	
}

void swap(int *first,int *second){
	int temp;
		temp = *first;
		*first = *second;
		*second = temp;
}
