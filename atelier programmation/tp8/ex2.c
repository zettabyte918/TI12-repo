#include <stdio.h>

int somme(int tab[], int n){
    if(n<1) return tab[0];
    else return  tab[n] + somme(tab,n-1);
}

void main(){
    int tab[9] = {1,1,1,1,1,1,1,1,1};
    
    printf("somme tu tableau=%d",somme(tab,8));

}