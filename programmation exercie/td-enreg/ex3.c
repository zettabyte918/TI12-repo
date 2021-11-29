#include <stdio.h>
#include <string.h>

const int nbBUS = 1;

typedef struct TIME {
    int h,m,s;
} TIME;


typedef struct LOCATION {
    char dep[20], ariv[20];
} LOCATION;

typedef struct HORAIRE {
    TIME dep,arriv;
} HORAIRE;


typedef struct BUS {
    int num;
    LOCATION location;
    HORAIRE time;
} BUS;

void addBUS(BUS b[]){
    for (int i = 0; i < nbBUS; i++) {
        printf("Entrez le numéro de bus N°%d: ",i+1);
        scanf("%d",&b[i].num);
        printf("Entrez le Lieu du départ de bus N°%d: ",i+1);
        scanf("%s",b[i].location.dep);
        printf("Entrez le Lieu d'arrivée de bus N°%d: ",i+1);
        scanf("%s",b[i].location.ariv);
        printf("Entrez le Horaire du départ (hh:mm:ss) de bus N°%d: ",i+1);
        scanf("%d:%d:%d",&b[i].time.dep.h,&b[i].time.dep.m,&b[i].time.dep.s);
        printf("Entrez le Horaire d'arrivée (hh:mm:ss) de bus N°%d: ",i+1);
        scanf("%d:%d:%d",&b[i].time.arriv.h,&b[i].time.arriv.m,&b[i].time.arriv.s);
    }
    
}

int minute(int a,int b){
    return a*60+b;
}

void showBUS(BUS b[],char dep[], char ariv[],int h1,int m1,int h2,int m2){
    int trouve = 0;
    int i = 0;
    for ( i = 0; i < nbBUS; i++){
        if(
            (!strcmp(b[i].location.dep,dep) 
            && !strcmp(b[i].location.ariv,ariv)) 
                &&
                    ((minute(h1,m1) <= minute(b[i].time.dep.h,b[i].time.dep.m)) &&
                    (minute(h2,m2) >= minute(b[i].time.arriv.h,b[i].time.arriv.m)))
        ) {
            printf("\n **NUMERO: %d** DPART: %s - ARRIVEE: %s - HEURE DEPART=%d:%d:%d - HEURE ARRIVEE=%d:%d:%d \n",
                b[i].num,
                b[i].location.dep,
                b[i].location.ariv,
                b[i].time.dep.h,
                b[i].time.dep.m,
                b[i].time.dep.s,
                b[i].time.arriv.h,
                b[i].time.arriv.m,
                b[i].time.arriv.s);
        }
    }
    
}

void main(){
    BUS b[10];

    addBUS(b);
    showBUS(b,"nabeul","tunis",7,00,12,30);
}