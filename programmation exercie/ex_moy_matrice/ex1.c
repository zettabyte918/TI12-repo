#include <stdio.h>

void main(){
    float t[30][5];
    int i,j;
    float moy;

    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            printf("entrez la note de la matiere %d de leudiant %d",j,i);
            scanf("%f",t[i,j]);
        }
    }
    for(i=0;i<2;i++){
        for(j=0;j<5;j++){
            printf("la note de la matiere %d de letudiant %d est egale %f \n",j,i,t[i,j]);
        }
    }
}