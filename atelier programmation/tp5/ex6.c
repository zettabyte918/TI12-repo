#include <stdio.h>
#include <string.h>
void main(){
    char adn[9][4] = {"GTG","CAC","CTG","ACT", "CCT","GAG", "AGG","TCT","GCC"};
    char t[50][4];
    char ch1,ch2;
    int n,i,j,ok;
    printf("entrez N= ");
    scanf("%d",&n);
    for (i = 0; i <= n; i++){
        ok=0;
        do {
            printf("Entrez une sequence ADN[%d]: ",i);

            scanf("%s",t[i]);
            j=0;
            do{
                ch1=t[i];
                ch2=adn[j];
                printf("%s==%s %d\n",ch1,ch2,t[i]==adn[j]);
                if(t[i] == adn[j]) {
                    ok=1;
                    printf("ggggggggg");
                } else {
                    j++;
                }
            }while(ok == 0 && j<9);
       }while(ok==0);
    }
    
}