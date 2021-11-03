#include <stdio.h>
#include <stdlib.h>

void main()
{
   int i,j=1,r=0,n,ok;
   for(i=3;i<=100;i++){
        j=1;
        r=0;
        while(j<=i) {
            if(i % j ==0) r++;
            j++;
        }
        if(r==2) printf("%d \n",i);
   }
}