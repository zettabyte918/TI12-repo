#include <stdio.h>

int position(int t[],int x){
    int i=0;
    while(x!=t[i] && t[i]){
        i++;
    }
    return x==t[i] ? i : -1;
}

void supprimer(int t[],int k){
    while(t[k]){
        t[k]=t[k+1];
        k++;
    }
}

void main(){
    int i,nb,k;
    int t[7] = {10,2,4,49,21,6}; //c'est le tableau deja declarer
    i=0;
    while(t[i]){
        printf("[%d]",t[i]);
        i++;
    }
    printf("\n");
    do{
        printf("supprime l’élément = ");
        scanf("%d",&k);
    }while(-1 == position(t,k));
    
    supprimer(t,position(t,k));
    
    //afficher le nauveau tableau apres la suppression.
    i=0;
    while(t[i]){
        printf("[%d]",t[i]);
        i++;
    }
    printf("\n");
}