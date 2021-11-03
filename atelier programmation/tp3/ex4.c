#include <stdio.h>
void main(){
    char c;

    do 
    {
        printf("Voulez vous Continuez ? ");
        scanf("%c",&c);
    } while(c =='O' || c == 'o');
    
    
}