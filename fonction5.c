#include <stdio.h>
#include <stdlib.h>
void permuter(int *pn1, int *pn2){
	int tmp;
	tmp=*pn1;
	*pn1=*pn2;
	*pn2=tmp;


}
int main(void){
	int a=1, b=2;
	printf("a=%d et b=%d\n", a,b);
	permuter(&a, &b);
	printf("a=%d et b=%d\n", a,b);
	return 0;
}