
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char msg[] = "String Copy";
	char dest[30] = "garbage";

	printf("Source string : <%s>\n",msg);
	printf("Dest string : <%s>\n",dest);
	
	printf("\nString Copy...\n");
	strcpy(dest, msg);

	printf("Source string : <%s>\n",msg);
	printf("Dest string : <%s>\n",dest);	
	return 0;
}
