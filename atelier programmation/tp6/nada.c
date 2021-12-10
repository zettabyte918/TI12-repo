#include <stdio.h>
#include <stdlib.h>
#include<string.h>

typedef struct {
  int h;
  int m;
  int s;
}
horaire;
typedef struct {
  int num;
  char ldepart[20];
  char larriver[20];
  horaire hdepart;
  horaire harriver;
}
bus;
int minute(int h, int m) {
  return h * 60 + m;
}
void main() {
  int i;
  bus tab[10];
  for (i = 0; i < 1; i++) {
    printf("saisir votre num");
    scanf("%d", & tab[i].num);
    printf("saisir votre  lieu de depart");
    scanf(" %s",  tab[i].ldepart);
    printf("saisir votre lieu d arriver\n");
    scanf(" %s",  tab[i].larriver);
    printf("saisir votre horraire de depart(h)");
    scanf("%d", & tab[i].hdepart.h);
    printf("saisir votre horraire de depart(m)");
    scanf("%d", & tab[i].hdepart.m);
    printf("saisir votre horraire de depart(s)");
    scanf("%d", & tab[i].hdepart.s);
    printf("saisir votre horraire de d arriver(h)");
    scanf("%d", & tab[i].harriver.h);
    printf("saisir votre horraire de depart(m)");
    scanf("%d", & tab[i].harriver.m);
    printf("saisir votre horraire de depart(s)");
    scanf("%d", & tab[i].harriver.s);
  }
  for (i = 0; i < 1; i++) {
    if ((strcmp(tab[i].ldepart, "nabeul") == 0) && (strcmp(tab[i].larriver, "tunis") == 0) && (tab[i].hdepart.h > 7) && minute(tab[i].harriver.h, tab[i].harriver.m) < 750) {
      printf("le numero de bus %d \n", tab[i].num);
    }
  }
  bus b;
  i=0;
  int trouve = 0;
  printf("saisir votre lieu de depart");
  scanf("%s",  b.ldepart);
  printf("saisir un num");
  scanf("%d", & b.num);
  printf("saisir heure de depart");
  scanf("%d", & b.hdepart.h);
  
  while (trouve==0 && i < 1) {
    if ((tab[i].num== b.num) && (tab[i].hdepart.h == b.hdepart.h)  && (strcmp(tab[i].ldepart,b.ldepart)==0)) {
        printf(" l'heure d'arriver de bus est :%d \n", tab[i].harriver.h);
        printf(" l'heure d'arriver de bus est :%d \n", tab[i].harriver.m);
        printf(" l'heure d'arriver de bus est :%d \n", tab[i].harriver.s);
        trouve=1;
    } else {
        i++;
    }
  }
  
}