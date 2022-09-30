#include <stdio.h>
#include <stdlib.h>
#include <string.h>
typedef enum SucFai{
	WINNER,
	LOSER,
	ENCO
} SucFai;
typedef union Grade{
	char niveau[20];
	char situation[20];
} Grade;
typedef struct Player{
	char pseudo[20];
	Grade grade;
	int score;
	SucFai resultat;

} Player;
void permuter(Player *pn1, Player *pn2){
	Player tmp;
	tmp=*pn1;
	*pn1=*pn2;
	*pn2=tmp;
}
int main(void){
	int nbPlayer,i,j;
	char mprincipal[10];
	Player *tabplayer;
	FILE *question = fopen("question.data", "r");
	FILE *proposition=fopen("proposition.data", "r");
	FILE *correct=fopen("correct.data", "r");
	char pr1[20], pr2[20], pr3[20], crc[20];
	char ligne[256];
	char reponse[20];
	char correctAnswer[20];

	printf("naviguer dans le menu parametre pour choisir le nombre des joueurs\n");
	scanf("%d", &nbPlayer);
	tabplayer=malloc(sizeof(int)*nbPlayer);
	for(i=0;i<nbPlayer;i++){
		strcpy(tabplayer[i].pseudo,"player"+i+1);
		strcpy(tabplayer[i].grade.niveau,"beginner");
		tabplayer[i].score=0;
		tabplayer[i].resultat=ENCO;
 
	}
	printf("le menu principal taper [debut] \t [sortie]\t \n");
	scanf("%s", mprincipal);
	printf("%s\n", mprincipal);
	if(strcmp(mprincipal,"debut")==0){
		printf("le jeu commencer \n");
		while(fgets(ligne, 255, question) != NULL){
			printf("%s\n", ligne);
			fscanf(proposition, "%s %s %s", pr1, pr2, pr3);
			printf("%s\t %s \t %s\n", pr1, pr2, pr3);
			fgets(correctAnswer, 255, correct);
			for(i=0;i<nbPlayer;i++){
			printf("player %d taper votre reponse\n",i+1);
			scanf("%s", reponse);
			if(strcmp(reponse, correctAnswer)==0){
				tabplayer[i].score++;
			}
		}

		}
		for(i=0;i<nbPlayer;i++){
			for(j=i+1;j<nbPlayer;j++){
				if(tabplayer[i].score<tabplayer[j].score){
					permuter(&tabplayer[i], &tabplayer[j]);
				}
		}
		tabplayer[i].resultat=LOSER;
	}
	//changement de status de gagnant
	tabplayer[0].resultat=WINNER;
	//affichage des resultat
	
	for(i=0;i<nbPlayer;i++){
		printf("%s \n",tabplayer[i].pseudo );
		printf("score : \t %d \n", tabplayer[i].score);
		printf("level \t : %s \n", tabplayer[i].grade.niveau);
		if(tabplayer[i].resultat==WINNER){
			printf("\t %s\n", "winner");
		}
		//printf("\t %s \n", tabplayer[i].resultat);
		printf("__________________________________________________________________\n");
	}
	}
	else
		printf("le jeu est sortie\n");
	
	system("pause");
	free(tabplayer);
	return 0;

}