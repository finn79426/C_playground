#include <unistd.h>   //_getch
#include <termios.h>  //_getch
// Linux裡面沒有conio.h，以這兩個替代。
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

char getch();


struct node{
	char data;
	struct node *link;
}head;

void show();
void insert(char);
void deletee(char);
void search(char);

int main(){
	char key, data;
	head.link = NULL;
	
	printf("-----------------------------------------\n");
	printf("\nFunction: 0 [Exit]	1 [Show]");
	printf("\n			2 [Insert]	3 [Delete]  4[Search]");
	printf("\n\n");

	while(1){
	key = getch();
		switch(key){
			case '0' : printf("\nBye Bye！\n");
					   exit(1);
			case '1' : printf("\n <%c> Listing... ",key);
					   show();
					   break;
			case '2' : printf("\n<%c> Insert one character, Input：",key);
					   data = getch();
					   insert(data);
					   break;
			case '3' : printf("\n<%c> Delete one character, Delete：",key);
					   data = getch();
					   deletee(data);
					   break;
			case '4' : printf("\n<%c> Search a character, Which： ",key);
					   data = getch();
					   search(data);
					   break;
			default : continue;
		}
	}
	return 0; // for main()
}

/*************************************************************************/

void show(){
	struct node *current;
	int count;
	current = head.link;
	// 如果有字元，則從頭開始依序列出。如果沒字元，cuurent == NULL
	for(count=0; current != NULL; current = current->link,count++)
		printf("%3c",current->data);
	printf("\n %d character(s) in total\n",count);

}

/*************************************************************************/

void insert(char instant){
	struct node *current, *previous, *ptr;
	previous = &head;
	current = previous->link;
	// 演算法
	while(current != NULL && current->data < instant){
		previous = current;
		current = current->link;
	}
	// 如果輸入字元重複
	if((current != NULL) && (current->data == instant)){
		printf("\n Character '%c' existed！\n",instant);
		return;
	}
	// 如果記憶體不足
	if((ptr=(struct node*)malloc(sizeof(struct node))) == NULL){
		printf("\nNot enough memory\n");
		return ;
	}

	// construct link list
	ptr->data = instant;
	ptr->link = current;
	previous->link = ptr;

	printf("\n Character '%c' inserted OK！\n",instant);
}

/****************************************************************************/

void deletee(char del){
	struct node *current, *previous;
	previous = &head;
	current = previous->link;
	while(current != NULL && current->data < del){
		previous = current;
		current = current->link;
	}

	if(current != NULL && current->data == del){
		previous->link = current->link;
		free(current);
		printf("\n Character '%c' delete OK！\n",del);
	}else{
		printf("\n Character '%c' not existed！\n",del);
	}
}

/**************************************************************************/

void search(char sear){
	struct node *current;
	int count = 1;
	current = head.link;

	while(current != NULL && current->data < sear){
		current = current->link;
		count++;
	}
	if((current != NULL) && (current->data < sear)){
		current = current->link;
		count++;
	}

	if((current != NULL) && (current->data == sear))
		printf("\n Character '%c' is #%d！\n",sear,count);
	else
		printf("\n Character '%c' Not existed！",sear);
}








char getch(){
    /*#include <unistd.h>   //_getch*/
    /*#include <termios.h>  //_getch*/
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
