#include <stdio.h>
#include <limits.h>

/*    
    Écrire une fonction qui détermine les indices de la plus grande et la plus petite valeur dans un
    tableau d'entiers : int maxima (int tab[], int n, int *imax, int * imin);
    La fonction retourne dans imax et imin les indices chercher.
    2
    Si le tableau contient plusieurs maxima ou minima, la fonction retiendra la position du premier
    maximum ou minimum rencontré.
    Écrire un programme qui affiche ensuite la valeur et la position du maximum et du minimum.
*/

void indexOfMinMax(int tab[5], int* indexMin, int* indexMax) {
    int min = INT_MAX;
    int max = INT_MIN;
    for(int i = 0; i < 5; i++) {
        if(min > tab[i]) {
            min = tab[i];
            *indexMin = i; 
        }
        if(max < tab[i]) {
            max = tab[i];
            *indexMax = i;
        }
    }
}


int main() {
    int tab[5] = {45, 2, 89, 17, 35};

    int indexMin = 0, indexMax = 0;

    indexOfMinMax(tab, &indexMin, &indexMax);

    printf("Voici l'index du minimum du tableau: %d et voici donc l'index du maximum: %d\n", indexMin, indexMax);

    return 0;
}