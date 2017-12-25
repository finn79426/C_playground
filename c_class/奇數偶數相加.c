
#include <stdio.h>
#include <stdlib.h>

void even(); // 偶數function
void odd();  // 奇數function

int main(){
	int choose;
	printf("1.奇數相加\n2.偶數相加\n===> ");
	scanf("%d",&choose);

	switch (choose){
		case 1 : odd();
				 break; 
		case 2 : even();
				 break;
		default : printf("Error!\n\n");
 			  	  main();				  
	}

	return 0;
}

void odd(){
	int i,num;
	
	for(i=1; i<=100; i=i+2){
		num = num + i;
	}
	printf("奇數相加 = %d\n",num);
}

void even(){
	int i,num;
	
	for(i=2; i<=100; i=i+2){
		num = num + i;
	}
	printf("偶數相加 = %d\n",num);
}


