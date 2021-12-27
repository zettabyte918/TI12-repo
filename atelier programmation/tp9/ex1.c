#include <stdio.h>


void initialisation(int t[],int n){
    for (int i = 0; i < n; i++){
        printf("Entrez la valeur de la case N°%d: ",i+1);
        scanf("%d",&t[i]);
    }
}

void display(int t[],int n){
    for (int i = 0; i < n; i++){
        printf("[%d]",t[i]);
    }
    printf("\n");   
}

void triBulles(int t[],int n){
    int passage=0;
    int permute=0;
    int aux;
    do {
        permute =0;
        for (int i = 0; i < n-1-passage; i++){
            if (t[i]>t[i+1]){
                aux = t[i];
                t[i]=t[i+1];
                t[i+1]=aux;
                permute=1;
            }
        }
        passage++;
    } while (permute==1);
}

void main(){
    int t[50];
    int n;
    printf("Entrez N: ");
    scanf("%d",&n);
    initialisation(t,n);
    display(t,n);
    triBulles(t,n);
    display(t,n);
}