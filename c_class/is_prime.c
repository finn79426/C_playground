

#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int is_prime(int);

int main(){
	int input;
	printf("輸入一整數:");
	scanf("%d",&input);
	if(is_prime(input)){
		printf("是質數\n");
	}else{
		printf("不是質數\n");
	}
	return 0;
}


int is_prime(int input){
	/* 先排除掉input <= 1 的狀況 */
    if(input <= 1)
		return 0;
	/* 如果該數是偶數，那一定就不是質數，因為可被2整除 */	
	if(input % 2 == 0)
		return 0;

    for(int i = 2; i * i <= input; i++)
        if(input % i == 0)
		   	return 0;


	return 1;
	/* i在for迴圈的範圍將會是 2 ~ 開根號input */
	/* 若整個for迴圈中，沒有遇到input mod i為0 ，則一定是質數*/

}
