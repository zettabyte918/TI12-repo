#include <stdio.h>

int nbRDV = 20;

typedef struct DATE {
    int j,m,a;
    
} DATE;

typedef struct RDV {
    char nom[20];
    DATE dt;
    int h;
} RDV;

typedef struct AGENDA {
    RDV R[20];
} AGENDA;

void remplir(AGENDA ag){
    for (int i = 0; i < nbRDV; i++){
        printf("Entrez le nom: ");
        scanf("%s",ag.R[i].nom);
        printf("Entrez le date (j-m-a): ");
        scanf("%d-%d-%d",ag.R[i].dt.j,ag.R[i].dt.m,ag.R[i].dt.a);
        printf("Entrez le heure: ");
        scanf("%s",ag.R[i].h);
    }
    
}

void main(){
    AGENDA ag;
    remplir(ag);

}