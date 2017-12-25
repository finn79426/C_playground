/* etherator to 9*1 .... */
#include <stdio.h>
#include <stdlib.h>

int main(){
	int first, second;
	for(second=1; second<10; second++){
		for(first=1; first<10; first++){
			printf("%d*%d= %d\t",first,second,(first*second));

			if(first == 9)
				printf("\n");
		}
	}		
	return 0;
}
