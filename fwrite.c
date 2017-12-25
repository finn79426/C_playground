
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>   //_getch*/
#include <termios.h>  //_getch*/
char getch();

int main(){
	FILE *fptr;
	struct node{
		char name[10];
		int score;
	};

	struct node student;
	char scorebuf[81];
	if((fptr = fopen("./student.rec","wb")) == NULL){
		printf("Can't open file : ./student.rec");
		exit(0);
	}

	
	do{
		printf("\nEnter name: ");
		gets(student.name);
		printf("Enter score: ");
		student.score = atoi(gets(scorebuf));
		fwrite(&student,sizeof(student),1,fptr);
		printf("One more? (y/n) ");
	}	while(getch() == 'y');

	fclose(fptr);

	return 0;
}




char getch(){
   
   
    char buf=0;
    struct termios old={0};
    fflush(stdout);
    if(tcgetattr(0, &old)<0)
        perror("tcsetattr()");
    old.c_lflag&=~ICANON;
    old.c_lflag&=~ECHO;
    old.c_cc[VMIN]=1;
    old.c_cc[VTIME]=0;
    if(tcsetattr(0, TCSANOW, &old)<0)
        perror("tcsetattr ICANON");
    if(read(0,&buf,1)<0)
        perror("read()");
    old.c_lflag|=ICANON;
    old.c_lflag|=ECHO;
    if(tcsetattr(0, TCSADRAIN, &old)<0)
        perror ("tcsetattr ~ICANON");
    printf("%c\n",buf);
    return buf;
}
