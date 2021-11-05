#include <stdio.h>
#include <string.h>
void main(){
    char ch[50];
    int i;
    printf("Entrez ch: ");
    scanf("%s",ch);
    i=0;
    while (ch[i]==ch[strlen(ch)-i-1] && i<(strlen(ch)-1)/2)
    {
        i++;
    }
    ch[i]==ch[strlen(ch)-i-1] ? printf("palindrom \n") : printf("non palinfrome \n");
    
}
    
    