#include <stdio.h>

void main(){
    int tmin[11],tmax[11],tmoy[11];
    for (int i = 0; i < 12; i++){
        printf("entre la temp min du moins %d: ",i+1);
        scanf("%d",&tmin[i]);
        printf("entre la temp max du moins %d: ",i+1);
        scanf("%d",&tmax[i]);
        tmoy[i] = (tmin[i] + tmax[i])/2;
    }

    for (int i = 0; i < 12; i++)
    {
        printf("la temp moy du moin %d = %d \n",i+1,tmoy[i]);
    }
    
    
}