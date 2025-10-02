#include <stdio.h>
#include <string.h>

int main() {

    /*
        Écrire un programme qui permet de saisir une matrice carrée (n*n) et d'afficher les éléments de
        sa diagonale principale.
    */

    int n, value;

    printf("Veuillez saisir un chiffre: \n");
    scanf("%d", &n);

    printf("Veuillez saisir une valeur pour les valeurs de votre matrice: \n");
    scanf("%d", &value);

    int matrice[n][n];

    // Remplir donc ma matrice
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            matrice[i][j] = value;
        }
    }

    // Afficher la diagonale !
    printf("Matrice %dx%d remplie avec la valeur %d pour vérifier :", n, n, value);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            if(i == j) {
                printf("%d ", matrice[i][j]);
            }
            printf("x ");
        }
        printf("\n");
    }


    // Afficher la matrice entière
    printf("Matrice %dx%d remplie avec la valeur %d pour vérifier :", n, n, value);
    for(int i = 0; i < n; i++) {
        for(int j = 0; j < n; j++) {
            printf("%d ", matrice[i][j]);
        }
        printf("\n");
    }

    return 0;
}