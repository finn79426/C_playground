#include <stdio.h>
#include <stdlib.h>

int main(){
	char grade;

	printf("Input your grade (A-E) :");
	scanf("%c",&grade);

	if ((grade >= 'A') && (grade <= 'Z')){
		grade = 'a' + (grade - 'A');
	}

	switch (grade){
		case 'a' : printf("Score 90 to 100. \n");
				   break;
		case 'b' : printf("Score 80 to 89. \n");
				   break;
		case 'c' : printf("Score 70 to 79. \n");
				   break;
		case 'd' : printf("Score 60 to 69. \n");
				   break;
		case 'e' : printf("Score under 60. \n");
				   break;
		default:   printf("Wrong grade! \n");
	}

	return 0;
}
