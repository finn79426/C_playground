
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int main(int argc,char *argv[]){
	char filename[80];
	char ch;
	FILE *fp;
	int count=0;

	if(argc == 1){
		printf("Input filename name:");
		gets(filename);
	}else
		strcpy(filename,argv[1]);

	if((fp = fopen(filename,"rb")) == NULL){
		printf("\nCan't open this file : %s",filename);
		exit(0);
	}

	rewind(fp);

	while(fscanf(fp,"%c",&ch) == 1)
		count++;
	printf("This file has %d charactor\n",count);

	if(fclose(fp) != 0){
		printf("Can't close this file : %s",filename);
		exit(0);
	}
	return 0;
}
