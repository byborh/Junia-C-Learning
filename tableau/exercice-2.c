#include <stdio.h>
#include <string.h>

int main() {

    /*
        Écrire un programme C qui affiche l’indice i dans le tableau T (telle que T[i] est le début de la plus
        longue suite consécutive d’un entier saisi) ainsi que la taille de cette suite.
        Exemple :
        Le programme doit afficher “la plus longue suite consécutive de 0 est : 3 et elle commence à partir
        de l’indice 4”
    */

    int tableau[9] = {0, 1, 0, 0, 0, 5, 2, 0, 0};

    int max_len = 1;       // Longueur max trouvée
    int current_len = 1;   // Longueur actuelle
    int max_start = 0;     // Indice de début de la suite max
    int current_start = 0; // Indice de début de la suite actuelle

    int from = tableau[0];
    int into = tableau[0];
    int value = tableau[0];
    int length = 0;

    for(int i = 1; i < 9; i++) {

        if(tableau[i] == tableau[i - 1]) {
            current_len++;
        } else  {
            current_len = 1;
            current_start = i;
        }

        if(current_len > max_len) {
            max_len = current_len;
            max_start = current_start;
        }
    }

    length = into - from;

    printf("La plus longue suite consécutive de %d est : %d et elle commence à partir de l’indice %d !\n", tableau[max_start], max_len, max_start);
    return 0;
}