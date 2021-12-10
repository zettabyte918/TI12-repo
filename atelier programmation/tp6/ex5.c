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

void lesEquipes(Equipe e[], int j){
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

void equipe(Equipe e[]){
    for (int i = 0; i < nbEquipe; i++){
        printf("Entrez le nom du l'equipe N°%d: ",i);
        scanf("%s",e[i].nom);
        lesEquipes(e,i);
    }
}

int NbbutMarque(Equipe e[],int eq){
    int nbBut =0;
    for (int i = 0; i < nbJoueurs; i++)
        nbBut=nbBut+e[eq].j[i].NbBut;
    return nbBut;
    
}

int butMarquer(Equipe e[], char nom[]){
    int b=0;
    int i=0;
    while(b==0 && i<nbEquipe){
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

    printf("\n\n*************************\n\n");       
    
}

int indexMaxNbbutMarque(Equipe e[],int eq){
    int nbBut = e[eq].j[0].NbBut;
    int index=0;
    for (int i = 1; i < nbJoueurs; i++)
        if(nbBut < e[eq].j[i].NbBut){
            nbBut=e[eq].j[i].NbBut;
            index = i;
        }
    
    return index;
    
}

int indiceEquipe_Nom(Equipe e[],char nom[]){
    int b=0;
    int i=0;
    while(b==0 && i<nbEquipe){
        if(strcmp(e[i].nom,nom)==0){
            b=1;
        } else {
            i++;
        } 
    };

    return b==1 ? i : -1;
}

void calculerNbutLePlusGRAND(Equipe e[]){
    char nomEquipe[30];
    int nbBut,indexEq,indexJo;
    char Nom[20];

        printf("Entrez le nom du equipe pour calculer le plus grand buteur: ");
        scanf("%s",nomEquipe);
        indexEq = indiceEquipe_Nom(e,nomEquipe);
        indexJo = indexMaxNbbutMarque(e,indexEq);
        
        indexEq !=-1 
            ? printf("Le nom du joueur le plus marqué est: %s \n",e[indexEq].j[indexJo].Nom) 
            : printf("Equipe non trouvé \n");

    printf("\n\n*************************\n\n");

}

const char* JoureursLePlusVieux(Equipe e[]){
    int maxAnnee=2021;
    int indexJoueur=0;
    int indexEquipe =0;
    for (int i = 0; i < nbEquipe; i++){
        for (int j = 0; j < nbJoueurs; j++){
            if(maxAnnee>e[i].j[j].d.a){
                maxAnnee=e[i].j[j].d.a;
                indexJoueur = j;
                indexEquipe=i;
            }
        }
    }
    
    return e[indexEquipe].j[indexJoueur].Nom;
}

void lePlusVieuxJoueurs(Equipe e[]){
    printf("Le plus vieux Joueurs est: %s",JoureursLePlusVieux(e));  
    printf("\n\n*************************\n\n");
  
}

void main(){
    Equipe e[nbEquipe];
    equipe(e); //question A
    calculerNbButMarque(e); //question B
    calculerNbutLePlusGRAND(e); //question C
    lePlusVieuxJoueurs(e); //question D   
}