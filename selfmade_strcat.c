
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

void selfmade_strcat(char *, char *);

int main(int argc,char *argv[]){
	selfmade_strcat(argv[1],argv[2]);
	return 0;
}

void selfmade_strcat(char *dest, char *src){
	int i,j;
	for(i=0; dest[i] != '\0'; i++)
		;
	for(j=0; src[j] != '\0';j++)
		dest[i+j] = src[j];  // 連結中
	dest[i+j] = '\0'; // 給予連結字串後的結尾	
	printf("\nResult:%s\n",dest);	
}
