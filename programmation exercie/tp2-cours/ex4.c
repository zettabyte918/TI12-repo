#include <stdio.h>
#include <math.h>

void main(){
    int a,b,c,x,delta;
    printf("entrez A et B et C: ");
    scanf("%d %d %d",&a,&b,&c);
    printf("resoudre l’equation %dx2 + %dx + %d = 0 \n",a,b,c);
    delta= b*b - 4*a*c;
    delta < 0 ? (printf("n'a pas de solution réelle.")) 
        : (delta !=0 ? (printf("L'équation %dx2 + %dx + %d = 0 a deux solutions distinctes x1=%lf et x2=%lf \n",a,b,c,(-b-sqrt(delta))/(2*a)
        , (-b+sqrt(delta))/(2*a))) 
        : (printf("L'équation %dx2 + %dx + %d = 0 a une unique solution : x0 =%d \n",a,b,c,(-b/(2*a)))));

}
   