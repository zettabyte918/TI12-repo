#include <stdio.h>

int main() {
    int moyenne;

    printf("Entrez votre moyenne svp: ");
    scanf("%d", &moyenne);

    switch (moyenne)
    {
    case 10 ... 11:    
        printf("Passable! \n");
        break;
    case 12 ... 13:
        printf("Assez bien! \n");
        break;
    case 14 ... 16:
        printf("Bien! \n");
        break;
    case 17 ... 20:
        printf("Excellent! \n");
        break;    
    default:
        break;
    }
    return 0;
}