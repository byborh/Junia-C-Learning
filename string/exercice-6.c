#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {

    /*    
        Soit un texte écrit en Français et présenté dans une chaîne de caractères T. On souhaite calculer le
        taux moyen d’utilisation des différentes lettres de l’alphabet.
        On vous demande donc d’écrire un programme permettant d’analyser le texte T et de retourner un
        tableau S composé de 26 éléments entiers contenant le taux de présence de chaque lettre de
        l’alphabet dans le texte T. (S[0] correspond à la lettre A et ainsi de suite).
    */

    char T[100];
    char alphabet[26] = {
        'a', 'b', 'c', 'd', 'e', 'f', 'g',
        'h', 'i', 'j', 'k', 'l', 'm', 'n',
        'o', 'p', 'q', 'r', 's', 't', 'u',
        'v', 'w', 'x', 'y', 'z'
    };
    int S[26] = {0};

    // récupérer une chaîne de char de l'utilisateur !
    printf("Veuillez saisir quelque chose: \n");
    fgets(T, sizeof(T), stdin);

    // supprimer le dernier saut de ligne
    int len = strlen(T);
    if(T[len-1] == '\n') T[len-1] = '\0';

    // supprimer les espaces/chiffres et mettre en miniscule les char
    for(int i = 0; T[i] != '\0'; i++) {
        if(isalnum(T[i])) {
            T[i] = tolower(T[i]);
        }
    }

    // parcourir toouuut le tableau donné par l'utilisateur
    for(int i = 0; T[i] != '\0'; i++) {
        // vérifier si l'index existe dans le tableau alphabet, si oui
        for(int j = 0; j < 26; j++) {
            if(T[i] == alphabet[j]) {
                // j'ajoutes +1 dans S[i]
                S[j] = S[j] + 1;
            }
        }
    }

    // retourner la réponse !
    printf("Voici la réponse:\n");
    for(int i = 0; i < 26; i++) printf("%d, ", S[i]);
    printf("\n");
    return 0;
}