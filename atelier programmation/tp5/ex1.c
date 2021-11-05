#include <stdio.h>
#include <string.h>
void main(){
    char ch[50];
    int i;
    int e;
    int o;
    int a;
    int u;
    int y;
    int j;
     i=0;
     e=0;
     o=0;
     a=0;
     u=0;
     y=0;
     j=0;
    printf("Entrez ub mot: ");
    scanf("%s",ch);
    for (j = 0; j <= strlen(ch)-1; j++){
        switch (ch[j]){
        case 'e':
            e++;
            break;
        case 'i':
            i++;
            break;
        case 'o':
            o++;
            break;
        case 'a':
            a++;
            break;
        case 'u':
            u++;
            break;            
        default:
            break;
        }
    }
    printf("La voyelle <i> apprait %d fois \n",i);
    printf("La voyelle <e> apprait %d fois \n",e);
    printf("La voyelle <o> apprait %d fois \n",o);
    printf("La voyelle <a> apprait %d fois \n",a);
    printf("La voyelle <u> apprait %d fois \n",u);
    printf("La voyelle <y> apprait %d fois \n",y);
    
}