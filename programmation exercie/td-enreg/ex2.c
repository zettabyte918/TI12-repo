// Un nombre complexe est défini par une partie réelle et une partie imaginaire (z =x + j y).
//     • Déclarer une structure COMPLEXE
//     • Etant donnée deux nombres complexes Z1 et Z2, calculer et afficher le nombre Z3 tel que Z3 = Z1 + Z2
//     • Calculer et afficher le nombre Z4 = Z1*Z2

#include <stdio.h>

typedef struct ComplexeForm {
    int r,i;
} ComplexeForm;

typedef struct Complexe {
    ComplexeForm c1,c2,s;
} Complexe;


void saisirComplexe(Complexe *c){
    printf("Entrez le nombre Complexe N°1: ");
    scanf("%d,i%d",&c->c1.r,&c->c1.i);
    printf("Entrez le nombre Complexe N°2: ");
    scanf("%d,i%d",&c->c2.r,&c->c2.i);
}

void sommeComplexe(Complexe *c){
    c->s.r = c->c1.r+c->c2.r;
    c->s.i = c->c1.i+c->c2.i;
}

void main(){
    Complexe c;
    saisirComplexe(&c);
    sommeComplexe(&c);
    printf("La somme de deux complexe est egale=%d,i%d \n",c.s.r,c.s.i);

}
