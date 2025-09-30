#include <stdio.h>
#include <string.h>

int main() {

    /*
        Écrire un programme qui permet de calculer et afficher la factorielle d’un nombre entré au clavier.
            0 ! =1
            5 ! = 5*4*3*2*1
    */

    int req;
    int res = 1;
    printf("Veuillez saisir un nombre : ");
    scanf("%d", &req);

    if (req < 0) {
        printf("La factorielle n'est pas définie pour les nombres négatifs.\n");
        return 1;
    }

    for(int i = 1; i <= req; i++) {
        printf("i = %d\tres = %d\n", i, res);
        res *= i;
    }

    printf("La factorielle de %d est %d. \n", req, res);

    return 0;
}