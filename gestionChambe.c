#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <time.h>
/*---------------------------------------------------------*/
typedef enum 
{
	False,
	True
}Bool;
/*---------------------------------------------------------*/
typedef struct EleveOfficier
{
	int matricule;
	char nom[20];
}EleveOfficier;
/*---------------------------------------------------------*/
typedef struct Lit
{
	int id;
	EleveOfficier* eleveOfficier;
	Bool etat;
}Lit;
/*---------------------------------------------------------*/
EleveOfficier* saisirEleveOfficier(void);
Lit* saisirLit(EleveOfficier* le);
Bool initialFile(char fileName[20]);
void insertData(Lit* lit1, char fileName[20]);
/*---------------------------------------------------------*/
int main(int argc, char const *argv[])
{
	EleveOfficier* eo1=saisirEleveOfficier();
	Lit* lit1=saisirLit(eo1);
	
	if(initialFile("chambre/chambre1.data")==True)
		printf("fichier initialisée\n");
	else
		exit(1);
	insertData(lit1, "chambre/chambre1.data");
	system("pause");
	return 0;
}
/*---------------------------------------------------------*/
EleveOfficier* saisirEleveOfficier(void)
{
	static EleveOfficier el;
	printf("taper le numero de matricule\n");
	scanf("%d", &el.matricule);
	printf("taper le nom de l eleve\n");
	scanf("%s", &el.nom);
	return &el;
}
/*-------------------------------------------------------*/
Lit* saisirLit(EleveOfficier* le)
{
	static Lit lit;
	printf("taper le numero de lit\n");
	scanf("%d", &lit.id);
	lit.eleveOfficier = le;
	lit.etat=False;
	return &lit;
}
/*-------------------------------------------------------*/
Bool initialFile(char fileName[20])
{
	FILE *file=fopen(fileName, "w+");
	if(file==NULL)
		return False;
	return True;
}
/*-------------------------------------------------------*/
void insertData(Lit* lit1, char fileName[20])
{
	char et[5];
	FILE *file=fopen(fileName, "r+");
	if(lit1->etat==True)
		strcpy(et, "oui");
	else
		strcpy(et, "non");
	fprintf(file, "id lit  : %d\nmatricule eleve : %d\nnom eleve : %s\netat:%s\n",  lit1->id, lit1->eleveOfficier->matricule, lit1->eleveOfficier->nom, et);
	fclose(file);
	printf("les informations sont insérer avec succées\n");
}
/*-------------------------------------------------------*/