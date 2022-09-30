#include <stdio.h>
#include <stdlib.h>
int max_2(int n1, int n2){
	if(n1>=n2){
		return n1;
	}else{
		return n2;
	}
}
int max_4(int n1, int n2, int n3, int n4){
	int max_1=max_2(n1, n2);
	int max_3=max_2(n3, n4);
	return max_2(max_1, max_3);
}
int main(void){
	int a=1, b=2, c=3, d=4;
	int max=max_4(a,b,c,d);
	printf("le max de ces variables est \n %d \n", max);
	return 0;
}