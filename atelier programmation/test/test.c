#include <stdio.h>

int nbFilm=4;

typedef struct Date {
    int j,m,a;
} Date;


typedef struct Film {
    char titre[20];
    int min;
    Date d;

} Film;

void remplir(Film f[]){
    for (int i = 0; i < nbFilm; i++){
        printf("Entrez le tire du film N°=%d: ",i+1);
        scanf("%s",f[i].titre);
        printf("Entrez la dureé du film N°=%d: ",i+1);
        scanf("%d",&f[i].min);
        printf("Entrez la date du creation (j,m,a) du film N°=%d: ",i+1);
        scanf("%d-%d-%d",&f[i].d.j,&f[i].d.m,&f[i].d.a);
    }   
}

void affiche(Film f[]){
    printf("\n");
    for (int i = 0; i < nbFilm; i++){
        printf("le tire du film N°=%d: %s \n",i+1,f[i].titre);
        printf("la dureé du film N°=%d: %d \n",i+1,f[i].min);
        printf("la date du creation (j,m,a) du film N°=%d: %d-%d-%d \n",i+1,f[i].d.j,f[i].d.m,f[i].d.a);
        printf("*********************\n");
    }
}

char * plusLongFilm(Film f[]){
    int max=0;
    int indice=0;
    int i;
    for (i = 0; i < nbFilm; i++){
        if(f[i].min>max) {
            max=f[i].min;
             indice = i;}
    }
    return f[indice].titre;
    
}

void affichePlusLong(Film f[]){
   printf("\n Le plus long film est: %s \n",plusLongFilm(f));
}

void decalage(Film f[],int i){
    int j;
    for ( j = i; j<nbFilm ; j++){
        f[j]=f[j+1];
    }
    
}

void supprimer(Film f[]){
    int i=0;
    while(i<nbFilm){
        if(f[i].d.a == 2015) {
            decalage(f,i);
            nbFilm=nbFilm-1;
        } else i++;
    }
    
}

void main(){
    Film f[nbFilm];

    remplir(f);
    affichePlusLong(f);
    supprimer(f);
    affiche(f);

}