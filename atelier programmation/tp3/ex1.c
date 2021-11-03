#include <stdio.h>
void main(){
    int x=0;
    while(x<=0){
        printf("%s entrez un entier positive: ",x<0 ? "svp!" : "");
        scanf("%d",&x);
    }
}