#include <stdio.h>

typedef struct { 
        int j,m,a;
    } Date;

typedef struct { 
        char Nom[20] ; 
        char Prenom[20] ; 
        Date D; 
        float Note[10];
        float Moy; 
    } Etudiant;




typedef struct { 
        int NbEtude;
        int NbMatiere;
        float Coef[100];
        Etudiant Etud[100];
    } Class;

void main(){
    Class c;
    int i,j;
    float moyenne;
    printf("Entrez Nb Etudiant: ");
    scanf("%d",&c.NbEtude);
    printf("Entrez Nb Matiere: ");
    scanf("%d",&c.NbMatiere);
    for ( i = 0; i < c.NbMatiere; i++){
        printf("entrez la coef du matiere N°%d: ",i);
        scanf("%f",&c.Coef[i]);
    }
    

    for (i = 0; i<c.NbEtude; i++){
        moyenne = 0;
        printf("entrez nom d'Etudiant N°%d: ",i);
        scanf("%s",c.Etud[i].Nom);
        printf("entrez prenom d'Etudiant N°%d: ",i);
        scanf("%s",c.Etud[i].Prenom);
        printf("entrez Annee d'Etudiant N°%d: ",i);
        scanf("%d",&c.Etud[i].D.a);
        printf("entrez Moins d'Etudiant N°%d: ",i);
        scanf("%d",&c.Etud[i].D.m);
        printf("entrez Jour d'Etudiant N°%d: ",i);
        scanf("%d",&c.Etud[i].D.j);

        for (int j = 0; j <c.NbMatiere; j++){
            do {
                 printf("entrez le Note du N°%d matiere: ",i);
                scanf("%f",&c.Etud[i].Note[j]);
            }while(c.Etud[i].Note[j] >20 || c.Etud[i].Note[j] <0);
           
        }

        int tCoef=0;
        for (j= 0; j <c.NbMatiere; j++){
            tCoef +=c.Coef[j];
        }

        float note=0;
        for (j = 0; j <c.NbMatiere; j++){
            note = c.Etud[i].Note[j] * c.Coef[j];
            moyenne +=(note/tCoef);
        }
        c.Etud[i].Moy=moyenne;

        printf("La moyenne du N°%d etudiant =%.2f \n",i,moyenne);


        
    }
    
}