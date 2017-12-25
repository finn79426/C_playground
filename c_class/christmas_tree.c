
#include <stdio.h>
#include <stdlib.h>

int main(){
	int i,j;
	for(i=0; i<5; i++){     // 列印5行 (改i<5即可變更次數) 
		
		for(j=-1; j<i; j++) // 列印i個"5" (控制橫列的部份)
			printf("5");

		printf("\n");
	}

	/*
	 
	關鍵：
	第1行印1個
	第2行印2個
	第3行印3個
	以此類推
	
	*/
	 		 	
	return 0;
}
