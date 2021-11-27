#include <stdio.h>
#include <string.h>

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

void lesEquipes(Equipe e[], int j){
    for (int i = 0; i < 2; i++){
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
        
    }        
    
}

void equipe(Equipe e[]){
    for (int i = 0; i < 1; i++){
        printf("Entrez le nom du l'equipe: ");
        scanf("%s",e[i].nom);
        lesEquipes(e,i);
    }
}

int NbbutMarque(Equipe e[],int eq){
    int nbBut =0;
    for (int i = 0; i < 1; i++){
        nbBut=nbBut+e[eq].j[i].NbBut;
    }
    return nbBut;
    
}

int butMarquer(Equipe e[], char nom[]){
    int b=0;
    int i=0;
    while(b==0 && i<3){
        if(strcmp(e[i].nom,nom)==0){
            b=1;
        } else {
            i++;
        } 
    };
    return b==1 ? NbbutMarque(e,i) : -1;
}

void calculerNbButMarque(Equipe e[]){
    char nomEquipe[30];
    int nbBut;
    printf("Entrez le nom du equipe pour calculer le nb but: ");
    scanf("%s",nomEquipe);
    nbBut=butMarquer(e,nomEquipe); 
    nbBut !=-1 
        ? printf("le nombre de but est egale %d \n",nbBut) 
        : printf("Equipe non trouvé \n");
    
}

void calculerNbutLePlusGRAND(Equipe e[]){
    char nomEquipe[30];
    int nbBut;
    printf("Entrez le nom du equipe pour calculer le nb but: ");
    scanf("%s",nomEquipe);

}

void main(){
    Equipe e[3];
    int nbB;
    equipe(e);
    calculerNbButMarque(e);
    calculerNbutLePlusGRAND(e);
    
}