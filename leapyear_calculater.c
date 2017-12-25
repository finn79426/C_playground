#include <stdio.h>
#include <stdlib.h>

int main(){
	int raw_year;
	printf("請輸入一個年份：");
	scanf("%d",&raw_year);
	
	

	if ((raw_year % 100 == 0) && (raw_year % 400 == 0)){
		printf("%d年是閏年\n",raw_year);
	}else if ((raw_year % 100 != 0 /*當raw_year不能被100整除*/) && (raw_year % 4 ==0)){
		printf("%d年是閏年\n",raw_year);
	}else {
		printf("不是閏年\n");
	}

	return 0;
}
