
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]){
	char filename[80];
	char ch;
	FILE *fp;
	int count = 0;

	if(argc == 1){
		// 如果沒參數
		printf("Input file name:");
		gets(filename);
	}else
		// 如果有參數，copy到filename裡
		strcpy(filename,argv[1]);

	if((fp = fopen(filename,"r")) == NULL){
		printf("\nCan't open this file %s",filename);\
		exit(0);
	}
	rewind(fp); // 回到檔案開頭，參數為pointer

	while(fscanf(fp,"%c",&ch) == 1)
		count++;
	printf("\nThere are %d characters in file <%s>.\n",count,filename);

	if(fclose(fp) != 0){
		printf("Can't close this file <%s>!\n",filename);
		exit(0);
	}
	return 0;
}
