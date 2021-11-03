#include <stdio.h>
void main(){
    int a,b,c;
    printf("entrez 3 entier successive: ");
    scanf("%d %d %d",&a,&b,&c);
    a>b ? (a>c ? printf("%d est superieure \n",a) 
        : printf("%d est superieure \n",c))
        : (b>c ? printf("%d est superieure \n",b) 
        : printf("%d est superieure \n",c));
        
    a<b ? ((a<c) ? (printf("%d est inferieure \n",a))
        : (printf("%d est inferieure \n",c))) 
        : ((b<c) ? (printf("%d est inferieure \n",b)) 
        : (printf("%d est inferieure \n",c)));
}