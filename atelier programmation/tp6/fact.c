#include <stdio.h>
int fact(int nb){
    int i,f;
    f=1;
    for(i=1;i<=nb;i++){
        f=f*i;
    }
    return f;
}
void main(){
    int x;
    printf("entrez un nombre pour calculer le factorielle: ");
    scanf("%d",&x);
    printf("le factorielle de %d=%d \n",x,fact(x));
}