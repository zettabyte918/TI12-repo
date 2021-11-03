#include <stdio.h>
#include <ctype.h>


void main(){
    char nom[10], prenom[10];
    int age, taille;

    printf("entrez votre nom: ");
    scanf("%s", nom);
    printf("entrez votre prenom: ");
    scanf("%s", prenom);
    printf("entrez votre age: ");
    scanf("%d", &age);
    printf("entrez votre taille en cm: ");
    scanf("%d", &taille);
    printf("Bonjour %c%s %s ! Tu as deja %d ans et tu mesure %d a bientot!! \n",toupper(nom[0]), nom + 1,prenom,age,taille);

}