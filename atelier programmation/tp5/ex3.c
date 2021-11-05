#include <stdio.h>
#include <string.h>
void main(){
    char ch[50];
    int i,ma7loul,msaker;
    printf("Entrez ch: ");
    scanf("%s",ch);
    ma7loul=0;
    msaker=0;
    for(i=0;i<=(strlen(ch)-1);i++){
        switch (ch[i])
        {
        case '(':
            ma7loul++;
            break;
        case ')':
            msaker++;
            break;
        default:
            break;
        }
    }
    ma7loul == msaker ? printf("coherent \n") : printf("ne pas coherent \n");
}