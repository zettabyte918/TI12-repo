#include <stdio.h>
#include <stdlib.h>
int main()
{
    int bissextile, an;
    printf("Entrer une année  \n");
    scanf("%d",&an);
    bissextile=(an % 4 == 0 && !(an % 100 == 0)) || (an % 400 == 0);
    printf("la valeur de bissextil est %d \n",bissextile);

    return 0;
}