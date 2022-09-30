#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	char a='A', b='Z', tmp;
	char *Pa, *Pb;
	Pa=&a;Pb=&b;
	printf("a = %c \n b = %c\n", a, b);
	tmp=a;
	*Pa=b;

 	*Pb=tmp;
 	printf("a= %c\n b=%c \n", a, b);
	return 0;
}