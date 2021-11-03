#include <stdio.h>
#include <string.h>

void main(){
    int i,j,x;
    char ch[254];
    printf("entrez nombre de ligne: ");
    scanf("%d",&x);
    for(i=0;i<x;i++){
       for(j=0;j<x-i-1;j++){
           strcat(ch,"*");
       }
        printf("%s \n",ch);
    }    
}