// findBinary(decimal)
//    if (decimal == 0)
//       binary = 0
//    else
//       binary = decimal % 2 + 10 * (findBinary(decimal / 2)

#include <stdio.h>

int toBinaire(int x){
    if(!x) return 0;
    else return (x % 2 + 10 * toBinaire(x / 2));
}

void main(){
    int x;

    printf("Entrez un entier: ");
    scanf("%d",&x);
    printf("%d en binaire=%d \n",x,toBinaire(x));    
}