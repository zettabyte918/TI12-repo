#include <stdio.h>
#include <string.h>

void main(){
    int x,a,i,j;
    char ch[20],c[20],cc[20],ccc[20];
    do {
        printf("entrez un entier positif: ");
        scanf("%d",&x);
    } while(x<0);
    i=0;
    do{
        a = x % 2;
        x = x / 2;
        sprintf(c, "%d", a);
        ch[i] = c[0];
        i++;
      
    } while(x != 0);

    j=0;
    while(ch[j] == '0' || ch[j] == '1') {
        strcat(ccc,ch);
        j++;
    }
    printf("%s",ccc);
    
}