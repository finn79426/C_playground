
#include <stdio.h>
#include <stdlib.h>
#define ROW 3
#define COLUMN 5


int main(){
	int matrix[ROW][COLUMN]; // matrix[3][5]
	int trans[COLUMN][ROW]; // trans[5][3]
	int i,j;
	// i 必定小於等於 3 == 迴圈 3 次
	// j 必定大於等於 5 == 迴圈 5 次
	
	printf("輸入原始矩陣(3x5大小) : \n");
	for(i=0 ; i<ROW ;  i++){
		for(j=0 ; j<COLUMN ; j++){
			printf("matrix[%d][%d] ====> ",i,j);
			scanf("%d",&matrix[i][j]);
			// 放入陣列matrix[i][j]
		}
	printf("\n");
	}	



	/* 轉置 */
	for(i=0 ; i<ROW ; i++){
		for(j=0 ; j<COLUMN ; j++){
			trans[j][i] = matrix[i][j];
		}
	}
	printf("轉置中...\n\n");



	printf("原始矩陣圖 :\n");
	for(i=0 ; i<ROW ; i++){
		for (j=0 ; j<COLUMN ; j++){
			printf("%5d",matrix[i][j]); // %5d => 空5格
		}
		printf("\n");
	}
	
	printf("\n轉置後的矩陣圖 :\n");
	for(i=0 ; i<COLUMN ; i++){
		for(j=0 ; j<ROW ; j++)
			printf("%5d",trans[i][j]);
		printf("\n");
	}



	return 0;
}
