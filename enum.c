#include <stdio.h>
#include <stdlib.h>
enum Booleen{
	False,
	True
};
int main(void){
	enum Booleen raouf=True;
	if(raouf){
		printf("hello enumeration\n");
	}
	system("pause");
	return 0;
}
