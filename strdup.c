
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(){
	char *msg1 = "Strings duplicate";
	char *msg2 = "Allocate space";
	char *dest;

	printf("Source string : <%s>\n",msg1);
	dest = strdup(msg1);
	printf("Dest string : <%s> at %p\n",dest,dest);
	printf("\n");
	printf("Source string : <%s>\n",msg2);
	dest = strdup(msg2);
	printf("Dest string : <%s> at %p\n",dest,dest);	
	return 0;
}
