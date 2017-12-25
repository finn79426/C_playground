
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	FILE *fptr;
	struct node{
		char name[10];
		int score;
	};	

	struct node student;
	if((fptr = fopen("./student.rec","rb")) == NULL){
		printf("Can't open this file : student.rec");
		exit(1);
	}
	
	printf("name		score\n");
	printf("-------------------\n");
	while(fread(&student, sizeof(student), 1, fptr) == 1)
		printf("%-10s %3d\n",student.name,student.score);
	
	// END
	fclose(fptr);

	return 0;
}
