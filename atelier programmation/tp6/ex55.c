#include <stdio.h>

const int nbJOUEUR = 1;
const int nbEQUIPE = 2;

typedef struct DATE {
    int a,m,j;
} DATE;

typedef struct JOUEUR {
    char nom[20];
    DATE d;
    int but;
} JOUEUR;

typedef struct EQUIPE {
    char nom[20];
    JOUEUR j[12];
} EQUIPE;


void main(){
    EQUIPE e[nbEQUIPE];
    int i,j;
    char nom[20];

    for ( i = 0; i < nbEQUIPE; i++) {
        printf("Entrez le nom de l'EQUIPE N°%d: ",i+1);
        scanf("%s",e[i].nom);
            for ( j = 0; j < nbJOUEUR; j++) {
                printf("Entrez le nom de l'JOUEURS N°%d: ",i+1);
                scanf("%s",e[i].j[j].nom);
                printf("Entrez le DATE DE NAISSANCE (aaaa,mm,jj) de l'JOUEURS N°%d: ",i+1);
                scanf("%d:%d:%d",
                    &e[i].j[j].d.a,
                    &e[i].j[j].d.m,
                    &e[i].j[j].d.j
                );
                printf("Entrez le BUT MARQUE de l'JOUEURS N°%d: ",i+1);
                scanf("%d",&e[i].j[j].but);
            }
    }

    printf("Entrez le nom de lequipe: ");
    scanf("%s",nom);

}