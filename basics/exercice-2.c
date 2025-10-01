#include <stdio.h>
#include <string.h>

int main() {
    int price;
    float discount = 0;
    printf("Combien devez vous payer ?: ");
    scanf("%d", &price);

    /*
        • Si le total à payer est inférieur ou égal à 20 € aucune remise ne sera attribuée.
        • Si le total est entre 20 € et 100 € il y aura une remise de 5%
        • Si le total est entre 100 € et 200 € il y aura une remise de 10%
        • Si le total est supérieur à 200 € il y aura une remise de 15% .
    */

    if(price > 20 && price < 100) {
        discount = (price * 5) / 100;
    } else if(price >= 100 && price < 200) {
        discount = (price * 10) / 100;
    } else if(price >= 200) {
        discount = (price * 15) / 100;
    }

    printf("Voici le discount que vous avez le droit : %.2f", discount);
    return 0;
}