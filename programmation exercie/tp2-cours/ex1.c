#include <stdio.h>
void main(){
    int a,b;
    printf("entrez A et B: ");
    scanf("%d %d",&a,&b);
    a>b ? printf("%d est superieure \n",a) 
        : ( (b>a) && (b !=0) ? (printf("%d est superieure",b)) 
        : (printf("%d est egale %d",b,a)));
}