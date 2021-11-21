#include <stdio.h>
#include <stdlib.h>
#include <string.h>

int Apparition(char c, char ch[]){
    int i,s;
    s=0;
    for (i = 0; i < strlen(ch); i++)
    {
        if(c==ch[i]){
            s=s+1;
        }
    }
    
  return s;
    
}

void main(){
    char ch[50];
    char c;
    printf("entrez une chaine de caractere: ");
    scanf("%s",ch);
    printf("entrez une caractere: ");
    scanf(" %c",&c);
    printf("le nombre de occurence = %d \n",Apparition(c,ch));

}