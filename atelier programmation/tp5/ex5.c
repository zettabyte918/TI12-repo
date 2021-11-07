#include <stdio.h>
#include <stdlib.h>
#include <string.h>
void main(){
    char ch[50];
    char ch1[] = "ABCDEFGHIJKLMNOPQRSTUVWXYZ";
    int x,j;
    printf("entre ch: ");
    scanf("%s",ch);
    for (int i = 0; i < strlen(ch); i++){
        j=-1;
        do {
            j++;
        }while(ch[i] != ch1[j]);
    ch[i]=ch1[j+1];
    }    
    printf("%s \n",ch);
    
    
}