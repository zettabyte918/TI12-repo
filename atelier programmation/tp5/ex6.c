#include <stdio.h>
#include <string.h>
void main(){
    char adn[9][4] = {"GTG","CAC","CTG","ACT", "CCT","GAG", "AGG","TCT","GCC"};
    char t[50][4];
    char ch1,ch2;
    int n,i,j,ok,occ;
    printf("entrez N= ");
    scanf("%d",&n);
    for (i = 0; i <= n; i++){
        ok=0;
        do {
            printf("Entrez une sequence ADN[%d]: ",i);

            scanf("%s",t[i]);
            j=0;
            do{
                //printf("%s==%s %d\n",t[i],adn[j],strcmp(t[i],adn[j]));
                if(strcmp(t[i],adn[j])==0) {
                    ok=1;
                } else {
                    j++;
                }
            }while(ok == 0 && j<9);
       }while(ok==0);
    }
    //nombre d'occurence
    occ=0;
    for (int j = 0; j <= i; j++){
        if(!strcmp(t[j],"CAC"))
            occ++;
    }
    printf("Le nombre doccurence CAC= %d \n",occ);
}