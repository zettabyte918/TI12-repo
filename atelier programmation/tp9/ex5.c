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

int Partition(ETUDIANT t[],int g,int d){
    int i,j;
    ETUDIANT piv,temp;

    i=g-1;
    j=d;
    piv=t[d];
    do {
        do {
            i++;
        } while (t[i].moy<piv.moy);
        do {
            j--;
        } while (t[j].moy>piv.moy);
        temp=t[i];
        t[i]=t[j];
        t[j]=temp;
    } while(j>i);
    t[j]=t[i];
    t[i]=t[d];
    t[d]=temp;
    return i;
}

void TriRapide(ETUDIANT t[],int g,int d){
    int i;

    if(d>g) {
        i=Partition(t,g,d);
        TriRapide(t,g,i-1);
        TriRapide(t,i+1,d);
    }
}

void main(){
    ETUDIANT t[50];
    int n;
    printf("Entrez N: ");
    scanf("%d",&n);
    initialisation(t,n);
    display(t,n);
    TriRapide(t,0,n-1);
    display(t,n);
}