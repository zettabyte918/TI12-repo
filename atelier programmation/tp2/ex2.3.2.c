#include <stdio.h>

int main() {
  int mm, an, jj;
  int rs;
  printf("Entrer une anneée \n");
  scanf("%d", & an);
  printf("Entrer un mois  \n");
  scanf("%d", & mm);
  printf("Entrer un jour  \n");
  scanf("%d", & jj);

  if (mm == 2) {
    rs = ((an % 4 == 0 && !(an % 100 == 0)) || (an % 400 == 0) ? 28 : 30);
    if (jj + 2 > rs) {
      mm = mm + 1;
      jj = (rs - jj) + 2;
    } else {
      jj = jj + 2;
    }
  } else if (mm <= 7) {
    rs = (mm % 2 == 1 ? 31 : 30);
    if (jj + 2 > rs) {
      mm = mm + 1;
      jj = rs % jj;
    } else {
      jj = jj + 2;
    }
  } else {
    rs = (mm % 2 == 0 ? 31 : 30);
    if (mm == 12) {
      if (jj + 2 > rs) {
        mm = 1;
        an = an + 1;
        jj = (rs - jj) + 2;
      } else {
        jj = jj + 2;
      }
    } else {
      jj = jj + 2;
    }
  }

  printf("la date de lendemain = l'annee:%d moins:%d jours:%d", an, mm, jj);

  return 0;
}