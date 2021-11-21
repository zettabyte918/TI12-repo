#include <stdio.h>
int somme(int a,int b){
    return a+b;
}

int produit(int a,int b){
  return a*b;
}

int division(int a,int b){
    return a/b;
}

int sustraction(int a,int b){
    return a-b;
}

void main(){
    int a;
    int b;
    char c;
    
    printf("entrz a = ");
    scanf("%d",&a);
    printf("operation de: ");
    scanf(" %c", &c);
    printf("entrz b = ");
    scanf("%d",&b);

    switch (c)
    {
    case '+':
        printf("la somme de %d %c %d = %d \n",a,c,b,somme(a,b));
        break;
    case '-':
        printf("la sustraction de %d %c %d = %d \n",a,c,b,sustraction(a,b));
    case '*':
        printf("la produit de %d %c %d = %d \n",a,c,b,produit(a,b));
    case '/':
        printf("la division de %d %c %d = %d \n",a,c,b,division(a,b));        
    default:
        break;
    }
}

