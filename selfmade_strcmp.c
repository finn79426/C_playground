
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int selfmade_strcmp(char *, char *);

int main(int argc,char *argv[]){
	if (selfmade_strcmp(argv[1],argv[2]) == 0)
		printf("兩字串相同！\n");
	else if (selfmade_strcmp(argv[1],argv[2]) == -1)
		printf("%s 比 %s 小\n",argv[1],argv[2]);
	else if (selfmade_strcmp(argv[1],argv[2]) == 1)
		printf("%s 比 %s 大\n",argv[1],argv[2]);	

	return 0;
}

int selfmade_strcmp(char *dest, char *src){

	// dest < src	回傳 -1
	// dest > src	回傳 1
	// dest == src	回傳 0

	for (int i=0; *dest != '\0'; dest++,src++){
		if(*src == '\0') // 如果src比dest提早結尾，代表一定比dest小
			return 1;
		if(*src > *dest)
			return -1;
		if(*src < *dest) // 如果src跟dest的字串長度相同，則開始進行比較
			return 0;
	}

	if (*src != '\0') // 當dest已到達結尾'\0'，而src還沒的時候
		return -1;

	return 0; // 單純為符合int函式之格式，實際上不可能執行到這行
}
