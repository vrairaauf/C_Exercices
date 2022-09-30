#include <stdio.h>
#include <stdlib.h>
#include <string.h>
int main(int argc, char const *argv[])
{
	char ch1[100],  *Pch1, *Pch2;
	printf("taper ch1\n");
	scanf("%s", ch1);
	
	Pch1=ch1;
	Pch2=ch1+(strlen(ch1)-1);
	for(;Pch1<ch1+(strlen(ch1)/2);Pch1++){
		if(*Pch1==*Pch2)
			Pch2--;
		else{
			printf("N'est Pas Une Chaine Palindrome \n");
			exit(1);
		}
	}
	printf("Chaine Palindrome\n");
	return 0;
}