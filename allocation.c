#include <stdio.h>
#include <stdlib.h>
int main(void){
	int n,i;
	int *tabn;
	printf("taper la lingueur du tableaux\n");
	scanf("%d", &n);
	tabn=malloc(sizeof(int)*n);
	for(i=0;i<n;i++){
		tabn[i]=i*3;
	}
	for(i=0;i<n;i++){
		printf("[%d]=%d\n", i, tabn[i]);
	}
	system("pause");
	free(tabn);
	return 0;
}