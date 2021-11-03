#include <stdio.h>

int main() {
    int jj, mm, aa, jtot, jreste;

    printf("Donnez la date sous la forme JJ MM AA: ");
    scanf("%d %d %d", &jj, &mm, &aa);

    switch (mm)
    {
    case 1:
    case 3:
    case 5:
    case 7:
    case 8:
    case 10:
    case 12:
        jtot = 31;
        break;
    case 4:
    case 6:
    case 9:
    case 11:
        jtot = 30;
        break;
    case 2:
        if(aa % 4 == 0) jtot = 29;
        else jtot = 28;
        break;
    }

    jreste = jtot - jj;
    printf("Le moins %d a %d jours et il reste encore %d jours pour sa fin. \n", mm, jtot, jreste);

    return 0;
}