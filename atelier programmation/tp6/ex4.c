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
        int Coef[100];
        Etudiant Etud[100];
    } Class;

void main(){
    Class c;
    int i;
    float moyenne;
    printf("Entrez Nb Etudiant: ");
    scanf("%d",&c.NbEtude);
    printf("Entrez Nb Matiere: ");
    scanf("%d",&c.NbMatiere);
    for ( i = 0; i < c.NbMatiere; i++){
        printf("entrez la coef du matiere N°%d: ",i);
        scanf("%d",&c.Coef[i]);
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

        for (int j = 0; j <c.NbMatiere; j++){
            int note = c.Etud[i].Note[j] * c.Coef[j];
            moyenne = moyenne + (note/c.NbMatiere);
        }
        c.Etud[i].Moy=moyenne;

        printf("La moyenne du N°%d etudiant =%f \n",i,moyenne);


        
    }
    
}