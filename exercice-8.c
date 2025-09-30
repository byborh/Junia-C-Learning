#include <stdio.h>
#include <string.h>

int main() {
    /*
        Écrire un programme permettant de saisir un entier positif (exemple 5426). Il calcule l'envers du
        nombre lu (ici 6245) et affiche ces deux valeurs.
    */

    char req[50], req1[50];

    printf("Veuillez saisir un nombre que vous voulez inverser !\n");
    scanf("%s", req);

    // c pour copier la requête de base
    strcpy(req1, req);    


    /*
        int left, right = 0, strlen(req)-1;
        left < right;
        left++, right--
    */

    int left = 0;
    int right = strlen(req)-1;

    while(left < right) {
        char tmp = req[left];
        req[left] = req[right];
        req[right] = tmp;

        left++;
        right--;
    }

    printf("Voici %s qui est l'inverse de %s !", req, req1);

    return 0;
}