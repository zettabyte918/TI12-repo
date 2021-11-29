// On désire définir une structure appelée SPORTIF pour décrire une compétition sportive de course. Sachant qu’un sportif est caractérisé par :
//     • un nom et prénom
//     • son pays
//     • sa date de naissance
//     • sa performance dans la course, définie en secondes
//     1. définir et déclarer la structure SPORTIF
//     2. Lire un tableau T_SPORT de 6 éléments de type SPORTIF
//     3. Trier le tableau T_SPORT selon la performance des sportifs
//     4. Afficher alors les noms, prénoms et pays des trois vainqueurs qui vont recevoir les médailles d’or, d’argent et de bronze. 

#include <stdio.h>

const int nbSPORTIF = 6;

typedef struct DATE {
    int j,m,a;
} DATE;


typedef struct SPORTIF {
    char nom[10],prenom[10],pays[10];
    DATE anif;
    int perf;
} SPORTIF;

void addSPORTIF(SPORTIF t[]){
    for (int i = 0; i < nbSPORTIF; i++) {
        if(i!=0) printf("\n");
        printf("Entrez le nom du SPORTIF N°%d: ",i+1);
        scanf("%s",t[i].nom);
        printf("Entrez le prenom du SPORTIF N°%d: ",i+1);
        scanf("%s",t[i].prenom);
        printf("Entrez le pays du SPORTIF N°%d: ",i+1);
        scanf("%s",t[i].pays);
        printf("Entrez le Date naissance (jj:mm:aaaa) du SPORTIF N°%d: ",i+1);
        scanf("%d:%d:%d",&t[i].anif.j,&t[i].anif.m,&t[i].anif.a);
        printf("Entrez le perfermance du SPORTIF N°%d: ",i+1);
        scanf("%d",&t[i].perf);
    }
    
}

void tri(SPORTIF t[]){
    int i,j;
    SPORTIF aux;
    for ( i = 0; i < nbSPORTIF; i++) {
        for (j = 0; j < nbSPORTIF; j++) {
            if(t[i].perf < t[i+1].perf){
                aux = t[i];
                t[i] = t[i+1];
                t[i+1] = aux;
            }
        }
    }
    
}

void medals(SPORTIF t[]){
    printf("\nmedal D'or pour: %s %s qui habite a %s \n",t[0].nom,t[0].prenom,t[0].pays);
    printf("medal D'argent pour: %s %s qui habite a %s \n",t[1].nom,t[1].prenom,t[1].pays);
    printf("medal Bronze pour: %s %s qui habite a %s \n",t[2].nom,t[2].prenom,t[2].pays);
}

void main(){
    SPORTIF T_SPORT[6];
    addSPORTIF(T_SPORT);
    tri(T_SPORT);
    medals(T_SPORT);
}