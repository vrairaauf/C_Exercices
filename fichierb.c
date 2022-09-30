#include <stdio.h>
#include <stdlib.h>
int main(int argc, char const *argv[])
{
	int a=23;
	FILE *fic;
	fic=fopen("fichierbinaire.bin", "wba");
	fwrite(&a, sizeof(int), 1, fic);
	return 0;
}