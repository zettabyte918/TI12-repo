#include <stdio.h>

typedef struct { 
        char Nom[30] ; 
        char Prenom[30] ; 
        int NbEnfants; 
        char PrenomEnfants[5][30] ; 
    } UnePersonne;

void main(){
    
    UnePersonne presonne;
    int i;

    printf("Entrez Nom: ");
    scanf("%s",presonne.Nom);
    printf("Entrez Prenom: ");
    scanf("%s",presonne.Prenom);
    printf("Entrez NB enfant: ");
    scanf("%d",&presonne.NbEnfants);

    for(i=0;i<presonne.NbEnfants;i++){
        printf("entrez le prenom du N°%d enfant: ",i);
        scanf("%s",presonne.PrenomEnfants[i]);
    }
}


