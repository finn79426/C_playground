
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

struct NAME{
	char *first;
	char *last;
};

struct ADDRESS{
	char *city;
	char *road;	
};

struct CLIENT{
	struct NAME name;
	struct ADDRESS address;
	int age;
	int length;
	char sex;
};


int main(){
	struct CLIENT somebody = {{"John","Lin"}, {"Taipei","110 Chung-shan St."}, 22, 173, 'F'};
	
	printf("NAME : %s %s \n",somebody.name.first, somebody.name.last);
	printf("ADDRESS : %s %s \n",somebody.address.road, somebody.address.city);
	printf("AGE : %d\n",somebody.age);
	printf("LENGTH : %d\n",somebody.length);
	printf("SEX : %c\n",somebody.sex);

	return 0;
}
