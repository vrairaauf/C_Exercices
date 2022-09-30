#include <stdio.h>
#include <stdlib.h>
const char* FORMAT_PERSON_OUT = "{\n\t name : %s ,\n\t age : %d ,\n\t gender : %c\n }\n";
typedef struct Person
{
	char name[20];
	int age;
	char gender;
}Person;
int main(int argc, char const *argv[])
{
	Person p1={
		.name= "raouf",
		.age=23,
		.gender='M'
	};
	FILE *fic;
	fic=fopen("binairef.data", "w+");
	fprintf(fic, FORMAT_PERSON_OUT,p1.name, p1.age, p1.gender);
	return 0;
}