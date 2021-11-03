# include <stdio.h>
# include <string.h>
int main ()
{ 
char ch[50];
int i,j,n;
  printf ("donner le nombre de lignes: ");
    scanf("%d",&n);
       
    for (i=0;i<n;i++)
     {
         for(j=0;j<n-i-1;j++){
             printf("**");
         }
         printf("\n");
     }
     printf("*");
    return 0;
}
