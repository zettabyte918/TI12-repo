#include <stdio.h>

void main() {
    int annee;
    printf("entrez un annee= ");
    scanf("%d", &annee);
    if(((annee % 4 == 0) && (annee % 4 != 0)) || (annee % 400) ) {
        printf("%d est bissectile \n",annee);
    }

}