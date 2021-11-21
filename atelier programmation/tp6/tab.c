#include <stdio.h>
const int nmax=100;

void lire_tab(int tab[],int n){
    for(int i=0;i<n;i++){
        printf("tab[%d]=",i);
        scanf("%d",&tab[i]);
    }
}

void ecrire_tab(int tab[],int n){
    printf("===========\n");
     for(int i=0;i<n;i++){
        printf("[%d]",tab[i]);
    }
    printf("\n===========");
}

int somme_tab(int tab[],int n){
    int i;
    int s=0;
    for(i=0;i<n;i++){
        s=s+tab[i];
    }
    return s;
}

void main(){
    int t[nmax];
    int l;
    do{
        printf("entrez la taille du tableau: ");
        scanf("%d",&l);
    }while(l>nmax || l<0);
    lire_tab(t,l);
    ecrire_tab(t,l);
    printf("\n La somme du tableau est=%d \n",somme_tab(t,l));

}