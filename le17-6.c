#include <stdio.h>
#include <stdlib.h>
int * aleas(void){
	static int r[5]={1,4, 7, 8};
	return r;
}
int main(int argc, char const *argv[])
{
	int *Pr;
	for(Pr=aleas(); *Pr; Pr++){
		printf("%d\n", *Pr);
	}
	return 0;
}