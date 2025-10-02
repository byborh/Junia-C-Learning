#include <stdio.h>
#include <string.h>

int main() {

    /*    
        Écrire un programme qui inverse une chaîne de caractères (donnée par l’utilisateur) et met le
        résultat dans une autre sans utiliser la bibliothèque <string.h>
    */

    char tab[100];
    char res[100];
    int i = 0, len = 0;

    printf("Veuillez saisir un mot ! \n");
    scanf("%s", tab);

    while(tab[len] != '\0') len++;


    for(int i = 0; i < len; i++) res[i] = tab[len - 1 - i];

    res[len] = '\0';


    printf("Voici le nombre de char dans c[]: %s !", res);
    
    return 0;
}

