
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc, char *argv[]){
	char filename[80];
	char msg[80];
	FILE *fp;

	/* 如果沒有給參數在命令列，在程式執行時補做一次 */ 
	if(argc == 1){
		printf("Input the filename: ");
		gets(filename);
	}else
		/* 如果有給參數，則直接複製字串到filename裡面 */
		strcpy(filename,argv[1]);

	/* 做找不到檔案的處置 */
	if((fp = fopen(filename,"a+")) == NULL){
		printf("\nCan't open this file : %s",filename);
		exit(0);
	}

	printf("\n\nAppend data to this file : %s\n",filename);
	printf("Press <Enter> at the beginning to quit！\n\n");

	while (gets(msg) && (msg[0] != 0))
		fprintf(fp,"%s",msg);

	rewind(fp); // 回到檔案開頭,因為接下來要做整個檔案的讀取

	printf("\nData in file %s :\n\n",filename);
	while(fscanf(fp,"%s",msg) == 1)
		puts(msg);
	
	if(fclose(fp) != 0){
		printf("\nCan't close this file : %s\n",filename);
		exit(0);
	}
	return 0;
}
