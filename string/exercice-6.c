#include <stdio.h>
#include <string.h>

int main() {

    /*    
        Soit un texte écrit en Français et présenté dans une chaîne de caractères T. On souhaite calculer le
        taux moyen d’utilisation des différentes lettres de l’alphabet.
        On vous demande donc d’écrire un programme permettant d’analyser le texte T et de retourner un
        tableau S composé de 26 éléments entiers contenant le taux de présence de chaque lettre de
        l’alphabet dans le texte T. (S[0] correspond à la lettre A et ainsi de suite).

        Écrire un programme qui remplace toutes les occurrences d'une chaîne de caractères « Chaine1 »
        dans une chaîne de caractères « Originale », par la chaîne « Chaine2 ».
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

