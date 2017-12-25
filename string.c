
#include <stdio.h>
#include <stdlib.h>

int main(){
	char msg1[10] = {'s', 't', 'r', 'i', 'n', 'g', '\0'};
	char msg2[] = "Null array size";
	char *msg3 = "Pointer view";
	char msg4[80];
	
	printf("msg1 : %s\n",msg1);
	printf("msg2 : %s\n",msg2);
	printf("msg3 : %s\n",msg3);

	/* strings pointer assignment */
	msg3 = msg2;
	printf("\n Now msg3 : %s\n",msg3);
	
	printf("\n\n Enter a strings :");
	gets(msg4);
	printf("msg4 : %s\n",msg4);	
	return 0;
}
