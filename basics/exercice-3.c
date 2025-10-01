#include <stdio.h>
#include <string.h>

int main() {
    float hour1, hour2, price;

    printf("A partir de quelle heure voulez vou qu'on garde votre enfant ?\n");
    scanf("%f", &hour1);

    printf("Jusqu'à quelle heure voulez vou qu'on garde votre enfant ?\n");
    scanf("%f", &hour2);

    /*
        • Une heure entre 18h et 21h coûte 5 €.
        • Une heure entre 21h et minuit coûte 7.5 €.
    */

    if (hour1 < 0 || hour1 > 24 || hour2 < 0 || hour2 > 24 || hour1 >= hour2) {
        printf("veuillez saisir une heure correcte wesh.\n");
        return 0;
    }


    // Faire le calcul à partir de 18h si l'heure de départ est inférieur à 18
    if(hour1 < 18) hour1 = 18;
    if (hour2 > 24) hour2 = 24;
    if (hour1 >= hour2) {
        printf("Aucune garde n'est nécessaire dans la plage horaire 18h–24h.\n");
        return 0;
    }

    // Si l'heure de départ est inférieur à 21 et l'heure de fin est supérieur à 21 ----> merge les 2 heures ensemble !
    if(hour1 < 21 && hour2 >= 21) price = ((21 - hour1) * 5) + ((hour2 - 21) * 7.5);
    // si l'heure de fin est inférieur à 21 ----> calculer le prix que par 5
    else if(hour2 <= 21) price = (hour2 - hour1) * 5;
    // si l'heure de début est supérieur à 21 ----> calculer le prix que par 7.5
    else price = (hour2 - hour1) * 7.5;

    printf("Voici le prix total à payer : %.2f €\n", price);
    return 0;
}