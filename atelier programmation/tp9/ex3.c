#include <stdio.h>
int n=4;

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

void decalage(int t[],int n,int i,int x){
    int j;
    for ( j = n; j>i ; j--){
        t[j]=t[j-1];
    }
    t[i]=x;
    
}

void insert(int t[],int n,int x){
    int i=0;
    do {
        i++;
    } while (t[i]<=x && i<n);
    decalage(t,n,i,x);
}

void main(){
    int t[20];
    int n,x;
    printf("Entrez N: ");
    scanf("%d",&n);

    initialisation(t,n);
    triBulles(t,n);
    display(t,n);

    printf("Entrez un valeur: ");
    scanf("%d",&x);

    insert(t,n,x);
    n=n+1;
    display(t,n);
    
}