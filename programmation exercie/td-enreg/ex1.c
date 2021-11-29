// Un véhicule est caractérisée par : 
//     • un numéro
//     • une marque
//     • un prix
//     • une couleur
// Ecrire un programme qui permet de :
//     • définir une structure VEHICULE
//     • lire deux variables V1 et V2 de type VEHICULE et afficher le véhicule le plus cher.

#include <stdio.h>

typedef struct VEHICULE_DATA {
    int num;
    char marque[10];
    float prix;
    char col[10];
} VEHICULE_DATA;

typedef struct VEHICULE {
    VEHICULE_DATA v1,v2;
} VEHICULE;


void addVehicule(VEHICULE *v){
    printf("Entrez le Numero du vehicule: ");
    scanf("%d",&v->v1.num);
    printf("Entrez le Marque du vehicule: ");
    scanf("%s",v->v1.marque);
    printf("Entrez le Prix du vehicule: ");
    scanf("%f",&v->v1.prix);
    printf("Entrez la Couleur du vehicule: ");
    scanf("%s",v->v1.col);

    printf("******************\n");

    printf("Entrez le Numero du vehicule: ");
    scanf("%d",&v->v2.num);
    printf("Entrez le Marque du vehicule: ");
    scanf("%s",v->v2.marque);
    printf("Entrez le Prix du vehicule: ");
    scanf("%f",&v->v2.prix);
    printf("Entrez la Couleur du vehicule: ");
    scanf("%s",v->v2.col);
    printf("******************\n");
}

int plusCherVehicule(VEHICULE v){
    return v.v1.prix>v.v2.prix;
}

void main(){
    VEHICULE v;

    addVehicule(&v);
    plusCherVehicule(v)
        ? printf("*%s-%d* est plus cher que *%s-%d*\n",v.v1.marque,v.v1.num,v.v2.marque,v.v2.num)
        : printf("*%s-%d* est plus cher que *%s-%d*\n",v.v2.marque,v.v2.num,v.v1.marque,v.v1.num); 
}