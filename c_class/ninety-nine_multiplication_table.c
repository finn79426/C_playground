/* iterator to 1*9 */
#include <stdio.h>
#include <stdlib.h>

int main(){
	int first, second;
	for (first=1; first<10; first++){
		for(second=1; second<10; second++){
			printf("%d*%d= %d\t",first,second,(first*second));

			if(second == 9){
				printf("\n");
			}
		}	
	}	
	return 0;
}
