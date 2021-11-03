#include <stdio.h>
void main(){
    int x,f,i;
    printf("entrez un entier: ");
    scanf("%d",&x);
    if(x==1) {
        printf("le factoriel de %d = %d \n",x,1);
    } else {
        f=1;
        for(i=1;i<=x;i++){
            f=f*i;
        }
        printf("le factoriel de %d = %d \n",x,f);
    }
    
    
}