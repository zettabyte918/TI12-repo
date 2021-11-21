#include <stdio.h>
int pgcd(int a,int b) {

    do {
        if(a>b){
            a=a-b;
        } else {
            b=b-a;
        }

    } while(a!=b);
    return a;
}
void main(){
    int a,b;
    printf("entrez a et b ");
    scanf("%d %d",&a,&b);
    printf("le pgcd(%d,%d)=%d \n",a,b,pgcd(a,b));
}