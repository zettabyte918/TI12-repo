#include <stdio.h>

int rechercheDicho(int tab[],int nb, int min, int max){
    int moy =(min+max)/2;
    if(min>max) return 0;
    if(tab[moy]==nb) return 1;

    if(nb > tab[moy]) return rechercheDicho(tab,nb,(min+max)/2,max);
    else return rechercheDicho(tab,nb,min,(min+max)/2);
   
}

void main(){
    int tab[6]={1,2,3,4,5,6};
    int x;

    printf("Entrez un entier pour cherché dans le tableau: ");
    scanf("%d",&x);
    rechercheDicho(tab,x,0,6) 
        ? printf("%d est dans le tableau\n",x)
        : printf("%d ne pas dans le tableau\n",x);
}