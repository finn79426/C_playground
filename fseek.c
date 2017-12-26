
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#define NUM 5
#define filename "data.dbf"

struct client{
	char name[8];
	char id[8];
	int age;
	int weight;
};

int main(){
	FILE *fp;
	int i;
	struct client who[NUM]{
		{"John","1575",23,60},
		{"Mary","6214",35,43},
		{"Foley","1207",44,55},
		{"Peter","5886",22,51},
		{"While","0402",17,59}
	};
	
	struct client set[NUM];
	struct client unit;

	if((fp = fopen(filename,"wb+")) == NULL){
		printf("\nCan't open this file : %s",filename);
		exit(0);
	}

	fwrite(who,sizeof(struct client),NUM,fp);
	printf("\nFile %s created...\n",filename);

	rewind(fp);
	fread(set,sizeof(struct client),NUM,fp);

	printf("\nData Listing...\n\n");
	printf("    NUMBER    NAME    ID    AGE    WEIGHT");
	printf("\n\n");
	for(i=0; i<NUM; i++){
		printf("    #%d",i+1);
		printf("    %8s    %8s",set[i].name,set[i].id);
		printf("    %5d    %6d",set[i].age,set[i].weight);
		printf("\n");
	}

	printf("\n\nDATA LISTING BACKWARD...\n\n");
	printf("    NUMBER    NAME    ID    AGE    WEIGHT");
	printf("\n\n");
	for(i=NUM-1; i>=0; i--){
		fseek(fp,i * sizeof(struct client), SEEK_SET);
		fread(&unit,sizeof(struct client),1,fp);
		
		printf("    #%d",i+1);
		printf("    %8s    %8s",set[i].name,set[i].id);
		printf("    %5d    %6d",set[i].age,set[i].weight);
		printf("\n");
	}
	
	return 0;
}
