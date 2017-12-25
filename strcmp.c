
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void test(char *,char *);

int main(){
	char *msg1 = "ABCDEFG";
	char *msg2 = "abcdefg";
	char *msg3 = "abcd";
	char *msg4 = "^[]?";

	test(msg1,msg1);
	test(msg1,msg2);
	test(msg2,msg3);
	test(msg1,msg4);
	test(msg2,msg4);
	return 0;
}


void test(char *buf1,char *buf2){
	int result;
	
	printf("\nCompare <%s> and <%s>\n",buf1,buf2);
	result = strcmp(buf1,buf2);

	if(result == 0)
		printf("<%s> equal to <%s>,return value is %d\n",buf1,buf2,result);
	else if(result < 0)
		printf("<%s> less then <%s>,return value is %d\n",buf1,buf2,result);
	else if(result > 0)
		printf("<%s> greater than <%s>,return value is %d\n",buf1,buf2,result);		
}
