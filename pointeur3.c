#include <stdio.h>
#include <stdlib.h>
int main(void){

int tab[20];
int *p,somme=0;
for(p=tab;p<tab+5;p++){
printf("donner un entier\n");
scanf("%d", p);
somme+=*p;

}

printf("la somme total :%d\n", somme);

return 0;
}