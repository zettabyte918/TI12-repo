#include <stdio.h>
void main(){
    int x;
    do {
        printf("%s entrez un entier positive: ",x<0 ? "svp!" : "");
        scanf("%d",&x);
    } while(x<=0);
}