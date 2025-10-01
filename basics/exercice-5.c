#include <stdio.h>
#include <string.h>
#include <math.h>

int main() {

    /*
        Écrire un programme qui saisit un entier entre 100 et 999 puis faire le carré de la somme de ses
        entiers si la somme est paire et faire la racine carrée de la somme si la somme est impaire.
    */

    // Récupérer un entier avec un longueur de 3
    int i, res, centaine, dizaine, unite;
    printf("Veuillez saisir un nombre entre 100 et 999 : ");
    scanf("%d", &i);

    if (i < 100 || i > 999) {
        printf("Erreur : le nombre doit être entre 100 et 999.\n");
        return 1;
    }

    // décomposer chacun par un chiffre
    centaine = i / 100;
    dizaine = (i / 10) % 10;
    unite = i % 10;

    res = centaine + dizaine + unite;

    if(res % 2 == 0) {
        printf("Voici la réponse : %d\n", res * res);
    } else {
        printf("La racine carrée de %d est : %.2f\n", res, sqrt(res));
    }

    return 0;
}