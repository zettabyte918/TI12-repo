#include <stdio.h>
typedef struct { 
  char  nom[30]; 
  char  prenom[30]; 
  float age;
} UnePers;

void main(){
    UnePers presonne;
    int i;

    printf("Entrez Nom: ");
    scanf("%s",presonne.nom);
    printf("Entrez Prenom: ");
    scanf("%s",presonne.prenom);
    printf("Entrez Age: ");
    scanf("%f",&presonne.age);

    printf("\n Nom: %s \n",presonne.nom);
    printf("Prenom: %s \n",presonne.prenom);
    printf("Age: %.0f \n",presonne.age);

}