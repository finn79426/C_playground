/*
 * By : howpwn
 * Email : finn79426@gmail.com
 */

#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void hanoi(int, char, char, char);

int times = 0;

int main(void){
    int n;

    printf("請輸入河內塔的高度：");
    scanf("%d", &n);
	
	clock_t begin = clock();
    hanoi(n, 'A', 'B', 'C');
	clock_t end = clock();

	double time_spent = (double)(end - begin) / CLOCKS_PER_SEC;

    printf("移動 %d 層河內塔共需移動 %d 次\n", n, times);
	printf("\n河內塔演算法共耗時：%f 秒\n", time_spent);
}

void hanoi(int n, char A, char B, char C){
    if (n == 1) {
        printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++times, n, A, C);
    }
    else {
        hanoi(n - 1, A, C, B);
        printf("%d: 將第 %d 個圓盤由 %c 移到 %c\n", ++times, n, A, C);
        hanoi(n - 1, B, A, C);
    }
}
