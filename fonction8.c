#include<stdio.h>
#include <stdlib.h>
int somme(int n){
	if(n==0){
		return 0;
	}else{
		return n+somme(n-1);
	}
}
int main(void){
 int n=3;
 int s;
 s=somme(n);
 printf("la somme %d\n", s);
 	system("pause");
	return 0;
}