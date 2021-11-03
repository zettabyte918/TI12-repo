#include <stdio.h>
void main(){
    int i,j,k,m;
    for(i=1;i<100;i++){
        k=0;
        for(m=1;m<=i;m++){
            if(m % i ==0){
                k++;
            }
            if(k==2){
                printf("%d \n",i);
            }
        }
    }
    
    
}