#include <stdio.h>

int fact(int n){
    if(!n) return 1;
    else return n*fact(n-1);
}

void main(){
    int n;

    printf("Entrez N=");
    scanf("%d",&n);
    printf("Le factorielle de %d=%d \n",n,fact(n));
}