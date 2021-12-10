#include <stdio.h>
#include <string.h>

const int nbJoueurs = 12;
const int nbEquipe = 3;

typedef struct Date { 
        int j,m,a;
    } Date;

typedef struct Joueur { 
        char Nom[30] ; 
        char Prenom[30] ; 
        Date d;
        int NbBut; 
    } Joueur;

typedef struct Equipe {
   char nom[30];
   Joueur j[12]; 
} Equipe;


void remplir(Equipe e[]){
    for (int i = 0; i < nbJoueurs; i++){
        i==0 && printf("\n\n*************************\n\n");
        printf("Entrez le nom du N°%d joueurs: ",i);
        scanf("%s",e[j].j[i].Nom);
        printf("Entrez le prenom du N°%d joueurs: ",i);
        scanf("%s",e[j].j[i].Prenom);
        printf("Entrez le nombre de but marqué du N°%d joueurs: ",i);
        scanf("%d",&e[j].j[i].NbBut);
        printf("entrez Annee du Joureurs N°%d: ",i);
        scanf("%d",&e[j].j[i].d.a);
        printf("entrez Mois du Joureurs N°%d: ",i);
        scanf("%d",&e[j].j[i].d.m);
        printf("entrez Jour du Joureurs N°%d: ",i);
        scanf("%d",&e[j].j[i].d.j);
        printf("\n\n*************************\n\n");
        
    }  
}

void main(){
    Equipe e[nbEquipe];
    
    remplir(e);
}
