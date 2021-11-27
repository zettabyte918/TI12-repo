#include <stdio.h>
typedef struct {
    float y,x;
} point;

void main(){
    point p;
    point t[5];
    int i;
    for ( i = 0; i < 4;i++){
        printf("entrez la %d point x: ",i);
        scanf("%f",&p.x);
        printf("entrez la %d point y: ",i);
        scanf("%f",&p.y);
        t[i]=p;

    }
    printf("\n");
    for ( i = 0; i < 4;i++){
        printf("la N°%d x=%.2f",i,t[i].x);
        printf(" la N°%d y=%.2f \n",i,t[i].y);
    }
    
    
}