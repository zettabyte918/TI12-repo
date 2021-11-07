#include<stdio.h>
#include<string.h>


int main()
{
 char ch[130];
 char ch1[130]="ABCDEFGHIJKLMNOPQRSTUVWXYZ";
 char ch2[130]="";
 int i,j;

 printf("taper une chaine\n");
 scanf("%s",ch);

 for (i=0;i<strlen(ch);i++){
     j=0;
     do {
        j++;
     }while(ch[i] != ch1[j]);
    ch2[i] = ch1[j+1];

}
 printf("%s \n",ch2);
 return 0;
}