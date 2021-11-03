#include <stdio.h>
void main(){
    int a,b,x;
    printf("entrez A et B: ");
    scanf("%d %d",&a,&b);
    printf("resoudre l’equation %dx + %d = 0 \n",a,b);
    b != 0 ? (a != 0 ?  printf("l'equation admet une solution unique x=%d  \n",x=-b/a)
        :( printf("cette equation n'admet pas de solution  \n"))) 
        : (a != 0 ? (  printf("une infinite de solutions  \n"))
        :(printf("admet 0 pour solution  \n")));

}