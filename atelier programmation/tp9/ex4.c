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

int Partition(int t[],int g,int d){
    int i,j,piv,temp;

    i=g-1;
    j=d;
    piv=t[d];
    do {
        do {
            i++;
        } while (t[i]<piv);
        do {
            j--;
        } while (t[j]>piv);
        temp=t[i];
        t[i]=t[j];
        t[j]=temp;
    } while(j>i);
    t[j]=t[i];
    t[i]=t[d];
    t[d]=temp;
    return i;
}

void TriRapide(int t[],int g,int d){
    int i;

    if(d>g) {
        i=Partition(t,g,d);
        TriRapide(t,g,i-1);
        TriRapide(t,i+1,d);
    }
}

void main(){
    int t[50];
    int n;
    printf("Entrez N: ");
    scanf("%d",&n);
    initialisation(t,n);
    display(t,n);
    TriRapide(t,0,n-1);
    display(t,n);
}