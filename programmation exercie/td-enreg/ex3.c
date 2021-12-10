// Un bus est caractérisé par un numéro, un lieu de départ, un lieu d’arrivée, un horaire de départ et un horaire d’arrivée. L’horaire est exprimé en (heure / minutes / secondes).­
//     1. déclarer la structure HORAIRE
//     2. déclarer la structure BUS
//     3. Saisir un tableau de 10 éléments de type Bus
//     4. Afficher les numéros des bus qui partent de Nabeul à la direction de Tunis, entre 7h du matin et 12h :30 mn.
//     5. Afficher l’heure d’arrivée d’un bus sachant son numéro, son lieu et heure de départ et son lieu d’arrivée.

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

void showBUS_num(BUS b[],char dep[], char ariv[],int h1,int m1,int h2,int m2){
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
            printf("\n**NUMERO: %d** \n",b[i].num);
        }
    }
    
}

void showBUS_heure(BUS b[]){
    BUS b1;
    int trouve = 0;
    int i = 0;

    printf("\nEntrez le numéro de bus: ");
    scanf("%d",&b1.num);
    printf("Entrez le Lieu du départ de bus: ");
    scanf("%s",b1.location.dep);
    printf("Entrez le Lieu d'arrivée de bus: ");
    scanf("%s",b1.location.ariv);
    printf("Entrez le Horaire du départ (hh:mm:ss) de bus: ");
    scanf("%d:%d:%d",&b1.time.dep.h,&b1.time.dep.m,&b1.time.dep.s);

    while (trouve == 0 && i<nbBUS) {
        if((b[i].num == b1.num) &&
            (b[i].time.dep.h == b1.time.dep.h) &&
                (b[i].time.dep.m == b1.time.dep.m) &&
                    (b[i].time.dep.s == b1.time.dep.s))
                        trouve=1 && printf("\nL'heure d'arrivée est: %d:%d:%d \n", b[0].time.arriv.h,b[0].time.arriv.m,b[0].time.arriv.s);
                            else i++;
    }
    
}

void main(){
    BUS b[10];

    addBUS(b);
    showBUS_num(b,"nabeul","tunis",7,00,12,30);
    showBUS_heure(b);
}