// 泡泡排序法：一種由小到大的排序演算法。
#include <stdio.h>
#include <stdlib.h>

// 待排序的數字共有14個			
#define LEN 14

int main(){
	// 待排序的數字共有14個
	int array[LEN] = {22, 34, 3, 2, 82, 55, 89, 50, 37, 5, 64, 35, 9, 70};
	
	printf("排序之前...\n");
	for(int i=0; i < LEN; i++){
		// 先用for迴圈將待排序的數字依序印出
		printf("%d -> ",array[i]);
	}

	printf("\n\n");

	// 這邊的程式碼開始進行排序的動作
	
	int temp; // temp的意思是"暫存"的意思(Temporary)
	int i,j;
	/* 泡泡排序法的規則是這樣：
	 * 如果有N筆資料需要排序(此例中，N=14)
	 * 那麼，資料兩兩相比的話，最多只需要比較N-1次 */
	for(i=0; i < LEN-1; i++){  // i的用處在於"需要比較幾輪？"
		for(j=0; j < LEN-1-i; j++){ // j的用處在於"定位元素"，(減i是因為要略過已經比較完成的部份)
			// 兩兩相比中...
			if(array[j] > array[j+1]){
				// 搬移中...
				temp = array[j];
				array[j] = array[j+1];
				array[j+1] = temp;
			}
			/* 小的for迴圈做完，只代表一輪的比較結束。
			 * 所以還是要看大的for迴圈有沒有做完喔！ */
		}
		// 大的for迴圈做完，就代表泡泡排序法已經結束囉
	}

	printf("排序之後...\n");
	for(int i=0; i < LEN; i++){
		// 先用for迴圈將排序後的數字依序印出
		printf("%d -> ",array[i]);
	}

	system("pause");
	return 0;
}
