#include <stdio.h>


void lire_somme(int nb){
    
    do {
        printf("Entrez la somme: ");
        scanf("%d",&nb);
    }while(nb % 5 !=0);
}

void nombre_bille(){
    int i,nb;
    int nbb;
    int tab[4] = {30,20,10,5};
     printf("Entrez la somme: ");
        scanf("%d",&nb);
    for(i=0;i<3;i++){
        printf("nb=%d \n",tab[i]);
        while(nb % tab[i] ==0){
            nb=nb-tab[i];
            nbb++;
        }
    }

    printf("le nombre de billet est egale=%d",nbb);

}

void main(){

    nombre_bille();
}