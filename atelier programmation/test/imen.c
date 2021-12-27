#include <stdio.h>

int   nbrclients;
typedef struct {
  int j, m, a;
} date_inscription;

typedef struct {
  char nom[10];
  int nbrpf;
  date_inscription date;
} client;

void remplit(client carnet[], int nbrclients) {
  int i;
  for (i = 0; i < nbrclients; i++) {
    printf("le nom de client n%d: ", i);
    scanf("%s", carnet[i].nom);
    printf("le nbr de points de fidelite de client n%d: ", i);
    scanf("%d", & carnet[i].nbrpf);
    printf("la date d'inscription (jj,mm,aaaa) de client n%d: ", i);
    scanf("%d:%d:%d", & carnet[i].date.j, & carnet[i].date.m, & carnet[i].date.a);
  }
}

void affiche(client carnet[], int nbrclients) {
  int i;
  printf("\n");
  printf("%d",nbrclients);
  for (i = 0; i < nbrclients; i++) {
    printf("le client n%d: \n", i);
    printf("le nom du client %s \n", carnet[i].nom);
    printf("le nombre de points de fidelite de client: %d \n", carnet[i].nbrpf);
    printf("la date d'inscription (jj,mm,aaaa) de client %d-%d-%d\n", carnet[i].date.j, carnet[i].date.m, carnet[i].date.a);
  }
}

int retourne(client carnet[], int nbrclients) {
  int i;
  client max = carnet[0];
  for (i = 1; i < nbrclients; i++) {
    if (max.nbrpf < carnet[i].nbrpf)
      max = carnet[i];
  }
  return max.nbrpf;
}

void decalage(client carnet[],int nbrclients,int i){
    int j;
    for ( j = i; j<nbrclients ; j++){
        carnet[j]=carnet[j+1];
    }
    
}

void supprime(client carnet[], int nbrclients) {
   int i=0;
    while(i<nbrclients){
        if((carnet[i].date.a = 2012) && (carnet[i].date.m = 12) ){
            decalage(carnet,nbrclients,i);
        nbrclients=nbrclients-1;
        } else i++;
    }
  
}

int main() {
  int n;
  client carnet[4];
  printf("la taille de tableau");
  scanf("%d", & nbrclients);
  remplit(carnet, nbrclients);
  

  printf("le client le plus fidele max = %d \n",retourne(carnet, nbrclients));
  supprime(carnet, nbrclients);
  nbrclients=nbrclients-1;
  affiche(carnet, nbrclients);
  return 0;
}