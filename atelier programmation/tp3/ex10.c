#include <stdio.h>
void main(){
    int a,b,x1,x2;
    printf("entrez a et b");
    scanf("%d %d",&x1,&x2);
    a=x1;
    b=x2;
    do {
        if(a>b){
            a=a-b;
        } else {
            b=b-a;
        }

    } while(a!=b);
    printf("le pgcd de %d et %d = %d",x1,x2,a);
    
    
}