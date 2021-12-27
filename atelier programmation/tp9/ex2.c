#include <stdio.h>

typedef struct ETUDIANT {
    char nom[20];
    float moy;
} ETUDIANT;


void initialisation(ETUDIANT t[],int n){
    for (int i = 0; i < n; i++){
        printf("Entrez le nom du etudiant N°%d: ",i+1);
        scanf("%s",t[i].nom);
        printf("Entrez le moyenne du etudiant N°%d: ",i+1);
        scanf("%f",&t[i].moy);
    }
}

void display(ETUDIANT t[],int n){
    for (int i = 0; i < n; i++){
        printf("[%s:%.2f] ",t[i].nom,t[i].moy);
    }
    printf("\n");   
}

void triBulles(ETUDIANT t[],int n){
    int passage=0;
    int permute=0;
    ETUDIANT aux;
    do {
        permute =0;
        for (int i = 0; i < n-1-passage; i++){
            if (t[i].moy>t[i+1].moy){
                aux = t[i];
                t[i]=t[i+1];
                t[i+1]=aux;
                permute=1;
            }
        }
        passage++;
    } while (permute==1);
}

void main(){
    ETUDIANT t[50];
    int n;
    printf("Entrez N: ");
    scanf("%d",&n);
    initialisation(t,n);
    display(t,n);
    triBulles(t,n);
    display(t,n);
}