/*
 * By : howpwn
 * Email : finn79426@gmail.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
	int array[11];
	int newNumber, index;
	for(int i=0; i<10; i++){
		/*printf("Data of Array[%d] : ", i+1);*/
		/*scanf("%d", &array[i]);*/
		int random = (rand()%100)+1;
		array[i] = random;
	}

	// Output origin
	for(int i=0; i<10; i++){
		printf("%d\t", array[i]);
	}
	printf("\n");

	// Input
	printf("Input your number : ");
	scanf("%d", &newNumber);
	index = newNumber % 10;
	
	clock_t begin = clock();

	// Insert
	for(int i=11-1; i>=index-1; i--){
		array[i+1] = array[i];
	}
	array[index] = newNumber;

	clock_t end = clock();


	// Output result
	for(int i=0; i<11; i++){
		printf("%d\t", array[i]);
	}
	printf("\n");
	
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Alogrithm used time: %f sec\n", time_spent);	


	return 0;
}

