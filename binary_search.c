
#include <stdio.h>
#include <stdlib.h>

int main(){
	int ary[21] = { -1, 23, 21, 2, 34, 45,
   					67, 44, 667, 86, 33,
					25, 66,  8, 15, 89, 99,
					100, 105, 29, 48 };
	int i,j;
	int temp,key;
	int left,right, mid;

	/* Insert Shorting... (low ---> high) */
	for(i=1; i<=20; i++){
		temp = ary[i];
		for(j=i; ary[j-1]>=temp; j--)
			ary[j] = ary[j-1];
		ary[j] = temp;
	}

	/* 印出插入排序後陣列 */
	printf("\nSorted Array ... \n");
	for(i=1; i<=20; i++){
		printf("%5d",ary[i]);
		if (!(i%5))
			printf("\n");
	}

	/* Binary Searching.... */
	printf("\nNumber search :");
	while(scanf("%d",&key) == 1){ //判斷scanf是否接收到1個傳進來的值
		left = 1; // 最左端
		right = 20; // 最右端
		while(left <= right){
			mid = (left + right) / 2;  // 取中間值
			if(key == ary[mid]) // 當keyword等於中間值，跳出尋找
				break;			
			if(key < ary[mid])	// 當Keyword小於中間值，縮小right範圍
				right = mid - 1;
			if(key > ary[mid])
				left = mid + 1 ; // 反之
		}

		if(ary[mid] == key)
			printf("Finding %d in Rank %d.\n",key,mid);
		else
			printf("Not found!");
		printf("\nNumber Searching :");
	}
	
	
	return 0;
}
