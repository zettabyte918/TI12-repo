#include <stdio.h>

int recherche(int tab[],int nb, int i){
    if(!tab[i]) return 0;
    else if(tab[i]==nb) return 1;
    else return recherche(tab,nb,i+1);
}

void main(){
    int tab[6]={1,2,3,4,5,6};
    int x;

    printf("Entrez un entier pour cherché dans le tableau: ");
    scanf("%d",&x);
    recherche(tab,x,0) 
        ? printf("%d est dans le tableau\n",x)
        : printf("%d ne pas dans le tableau\n",x);
}