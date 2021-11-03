#include <stdio.h>

int main() {
    float montant,remise;
    int taux = 1;

    printf("Montant? (en Dinars):");
    scanf("%f", &montant);
    
    //methode 1
    // if(montant < 2000) taux = 1;
    // else if (montant <= 5000) taux = 5;
    // else taux = 10;

    //methode 2
    (montant <= 5000) ? ((montant < 2000) ? (taux = 1) : (taux = 5)) : (taux = 10);
    
    remise = (montant * taux) / 100;
    montant = montant - remise;
    printf("Montant Net: %.2f \n",montant);

    return 0;
};