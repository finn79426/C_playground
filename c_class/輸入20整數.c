
#include <stdio.h>
#include <stdlib.h>

int main(){
	int raw_input;
	int even=0,odd=0;
	int i;

	for(i=1; i<21; i++){
		printf("輸入第%d個數字:",i);
		scanf("%d",&raw_input);
		if(raw_input % 2 == 0){
			even++;
		}else{
			odd++;
		}
	}

	printf("奇數共%d個\n偶數共%d個",odd,even);
	return 0;
}
