#include <stdio.h>
void main(){
    int som,n,i;
    printf("entrez un nombre: ");
    scanf("%d",&n);
    som=0;
    for(i=1;i<n;i++){
        if(n % i == 0){
            som = som + i;
        }
    }
    if(som == n) printf("%d est un nombre parfait \n",n);
    
}