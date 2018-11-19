/*
 * By : howpwn
 * Email : finn79426@gmail.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

struct node{
	int data;
	struct node *link;
};
typedef struct node Node;


int main(){
	Node *first, *current, *previous;
	Node *newNode;	// 待插入的新節點
	Node *prevNode; // 待插入的新節點 的前一節點
	char newNumber;	// 座號
	int index;		// 插入位置

	for(int i=0; i<10; i++){
		current = (Node *) malloc(sizeof(Node));	// Create new node
		printf("Data of Node[%d] : ", i+1);
		scanf("%d", &(current->data));
		if(i==0)
			// 如果 current 是第一個節點(後面沒節點)，把 current 作為首節點
			first = current;
		else
			previous->link = current;	// 否則把前一個的 link 指向當前節點
			
		current->link = NULL;
		previous = current;	// 將前一節點往前搬
	}
	
	// Output Origin
	current = first;	// 設 cuurrent 為首節點 (歸零)
	while(current != NULL){
		printf("%d\t", current->data);
		current = current->link;
	}
	printf("\n");

	// Input
	printf("Input your number : ");
	scanf("%d", &newNumber);
	index = newNumber % 10;
	
	clock_t begin = clock();
	
	// Get prev_node at index
	prevNode = (Node *) malloc(sizeof(Node));
	current = first;	// 設 cuurrent 為首節點 (歸零)
	int count = 1;
	while(current != NULL){
		if(count == index)
			prevNode = current;	// Got it
		// Not found yet, keep going
		count++;
		current = current->link;
	}
	
	// Insert after prevNode
	newNode = (Node *) malloc(sizeof(Node));
	newNode->data = newNumber;
	newNode->link = prevNode->link;
	prevNode->link = newNode;
	
	clock_t end = clock();
	
	// Output result
	current = first;	// 設 cuurrent 為首節點 (歸零)
	while(current != NULL){
		printf("%d\t", current->data);
		current = current->link;
	}
	printf("\n");
	
	// Output alogrithm used time
	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;
	printf("Alogrithm used time: %f sec\n", time_spent);	
	
	return 0;
}

