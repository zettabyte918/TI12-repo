#include <stdio.h>
void main(){
    int a,b;
    printf("saisie A= ");
    scanf("%d",&a);
    printf("saisie B= ");
    scanf("%d",&b);
    if(a==b) {
        printf("egale");
    } else if (a < b){
        printf("A est inferieur");

    } else {
        printf("A est superiere");
    }
}