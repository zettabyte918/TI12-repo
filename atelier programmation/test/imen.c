#include <stdio.h>

int nbrclients = 4;

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
  for (i = 0; i < nbrclients; i++) {
    printf("le client n%d: ", i);
    printf("le nom du client %s ", carnet[i].nom);
    printf("le nombre de points de fidelite de client: %d ", carnet[i].nbrpf);
    printf("la date d'inscription (jj,mm,aaaa) de client %d-%d-%d", carnet[i].date.j, carnet[i].date.m, carnet[i].date.a);
  }
}

int retourne(client carnet[], int nbrclients) {
  int i;
  int max = carnet[0].nbrpf;
  for (i = 0; i < nbrclients; i++) {
    if (max < carnet[i].nbrpf)
      max = carnet[i].nbrpf;
  }
  printf("le joueur numero  %d  est le plus fid�le ", i);
}

void supprime(client carnet[], int nbrclients) {
  int i;
  for (i = 0; i < nbrclients; i++) {
    if ((carnet[i].date.a = 2012) && (carnet[i].date.m = 12)) {
      carnet[i] = carnet[i + 1];
    }
  }
}

int main() {
  int n, pf;
  client carnet[4];
  printf("la taille de tableau");
  scanf("%d", & nbrclients);
  remplit(carnet, nbrclients);
  affiche(carnet, nbrclients);
  pf = retourne(carnet, nbrclients);
  supprime(carnet, nbrclients);

  printf("la taillehhhh de tableau");
  return 0;
}