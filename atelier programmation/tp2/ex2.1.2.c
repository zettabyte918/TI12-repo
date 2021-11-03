#include <stdio.h>

void main(){
    char c;
    printf("entrez un caractere c= ");
    c=getchar();
    switch (c)
    {
    case 65 ... 90:
        printf("Lettre majuscule \n");
        break;
    case 97 ... 122:
        printf("Lettre miniscule \n");
        break;
    case 48 ... 57:
        printf("cest un chiffre \n");
        break;             
    case 33 ... 47:
        printf("cest un caractere special \n");
        break; 

    default:
        break;
    }
}