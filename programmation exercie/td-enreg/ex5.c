// Ecrire un algorithme permettant de :
// 1. Remplir un tableau T de N habitants (N≤100).
// 2. Afficher à partir de T les adresses des habitants nés avant une année de naissance
// donnée.
// 3. Afficher les noms et les dates de naissance des habitants de la ville de ‘Zemmouri‘ de
// la wilaya de ‘Boumerdes‘.

#include <stdio.h>
#include <string.h>

typedef struct TDATE {
    int jours,mois,annee;
} TDATE;

typedef struct TADRESSE {
    int num,cw;
    char rue[50];
    char ville[20];
    char wilaya[20];
} TADRESSE;

typedef struct THABITANT {
    char nom[20];
    char prenom[20];
    TDATE date_nais;
    TADRESSE residence;
} THABITANT;

void remplir(THABITANT h[], int n){
    for (int i = 0; i < n; i++) {
        printf("Entrez Nom: ");
        scanf("%s",h[i].nom);
        printf("Entrez Prenom: ");
        scanf("%s",h[i].prenom);
        printf("Entrez Date Nai: ");
        scanf("%d/%d/%d",&h[i].date_nais.jours,&h[i].date_nais.mois,&h[i].date_nais.annee);
        printf("Entrez Num: ");
        scanf("%d",&h[i].residence.num);
        printf("Entrez Rue: ");
        scanf("%s",h[i].residence.rue);
        printf("Entrez Ville: ");
        scanf("%s",h[i].residence.ville);
        printf("Entrez wilaya: ");
        scanf("%s",h[i].residence.wilaya);
        printf("Entrez CW: ");
        scanf("%d",&h[i].residence.cw);
    }
}

void recherche(THABITANT h[], int n){
    int d;
    printf("Entrez date_nais=");
    scanf("%d",&d);

    for (int i = 0; i < n; i++) {
        if(d>h[i].date_nais.annee){
            printf("\nNom:%s %s-%s-%s \n",h[i].nom,h[i].residence.rue,h[i].residence.ville,h[i].residence.wilaya);
        }
    }   
}

int check(THABITANT h[],int n,char ville[],char wilaya[]){
    int i=0;
    int trouve=0;

    while (trouve==0 && i <n) {
        if(!strcmp(h[i].residence.ville,ville) && !strcmp(h[i].residence.wilaya,wilaya))
            trouve=1;
                else
                    i++;
    }

    return trouve == 1 ? i : -1;
    
}

void recherche2(THABITANT h[],int n, char ville[],char wilaya[]){
    int p;
    p=check(h,n,ville,wilaya);
    p != -1
        ? printf("\nNom:%s DateNais: %d/%d/%d\n",
            h[p].nom,
            h[p].date_nais.jours,
            h[p].date_nais.mois,
            h[p].date_nais.annee)
        : printf("Adresse non trouvé \n");
}

void main(){
   THABITANT h[100];
   int n;

     do {
        printf("Entrez N: ");
        scanf("%d",&n);
    } while(n<1 || n>100 );

    remplir(h,n);
    recherche(h,n);
    recherche2(h,n,"zemmouri","boumerdes");

    
}