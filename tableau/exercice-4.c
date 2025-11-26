#include <stdio.h>
#include <string.h>

int main() {

    /*
        Rechercher et afficher dans une matrice donnée A les éléments qui sont à la fois un maximum sur
        leur ligne et un minimum sur leur colonne. Ces éléments sont appelés des points-cols.
        Afficher les positions et les valeurs de tous les points-cols trouvés.
    */

    // Parcourir tout le tableau pour connaitre toutes la lignes

    int tab[3][3] = {{10, 5, 1},{456, 1, 5},{1, 2, 3}};
    int indexOfMaxValueinLine;
    int indexOfMaxValueinColonne;
    int maxValue = 0;

    for(int i = 0; i < 3; i++) {
        for(int j = 0; j < 3; j++) {
            if(tab[i][j] > maxValue) {
                maxValue = tab[i][j];
                indexOfMaxValueinLine = i;
                indexOfMaxValueinColonne = j;
            }
        }
    }

    int res = maxValue;


    for(int i = 0; i < 3; i++) {
        if(tab[i][indexOfMaxValueinColonne] < res) {

            res = tab[i][indexOfMaxValueinColonne];
        }
    }

    printf("Voici la réponse: %d\n", res);

    return 0;
}