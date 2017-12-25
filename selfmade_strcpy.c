
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void selfmade_strcpy(char *, char *);

int main(int argc,char *argv[]){ // 因為接進來的不是字元，字串本身就是陣列，因為需要接進來的是多個字串，所以是二維陣列
	selfmade_strcpy(argv[1],argv[2]);
	return 0;
}

void selfmade_strcpy(char *dest, char *src){  // 接進來的是單一字串，*argv
	
	printf("In strcpyfunc,dest is :%s\n",dest);
	printf("In strcpyfunc,src is :%s\n",src);
	dest = src;	
		
	printf("Result... Dest = %s\n",dest);	
}
