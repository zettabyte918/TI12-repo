#include <stdio.h>


void main ()
{ 
    int i,a=6,b=100,x;
    x=0;
    for(i=1;i<=a;i++){
        if(a % i == 0) {
            x=x+1;

            printf("%d) %d \n",x,i);
        }
    }
     x=0;
    printf("========== \n");
    for(i=1;i<=b;i++){
        if(b % i == 0) {
                        x=x+1;

                        printf("%d) %d \n",x,i);

        }
    }

}