#include <stdio.h>
#include <string.h>

int occur(char ch[],char c, int n,int occ){    
    if(n<1) return occ;
    else if(ch[n]==c) return occur(ch,c,n-1,occ+1);
    else return occur(ch,c,n-1,occ);
}


void main(){
    char ch[10];
    char c;
    printf("Entrez une chaine: ");
    scanf("%s",ch);
    printf("Entrez une caractere: ");
    scanf(" %c",&c);
    printf("le nombre doccurence du caractere %c est=%d \n",c,occur(ch,c,strlen(ch)-1,0));

}