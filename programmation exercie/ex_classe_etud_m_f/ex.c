#include <stdio.h>
void main()
{
    int i,m=0,f=0;
    char c[30];
    for(i=0;i<5;i++){
       
          printf("entrez m ou f \n");
          scanf("%s",&c[i]);
       
          if(c[i]=='m'){
              m=m+1;
          } else if(c[i]=='f') {
              f=f+1;
          }
    
    }
    printf("\n %d homme \n %d femme",m,f);
}
