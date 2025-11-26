#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
    char input[100];
    char cleaned[100];
    int len, i, j = 0;

    printf("Veuillez saisir quelque chose :\n");
    fgets(input, sizeof(input), stdin);

    // Supprimer le saut de ligne à la fin
    len = strlen(input);
    if(input[len-1] == '\n') {
        input[len-1] = '\0';
    }

    // Nettoyage: enlever espaces, ponctuations, mettre en minuscules
    for(int i = 0; input[i] != '\0'; i++) if(isalnum(input[i])) cleaned[j++] = tolower(input[i]);
    cleaned[j] = '\0';

    // Vérification du palindrome
    int is_palindrome = 1;
    int n = strlen(cleaned);
    for(int i = 0; i < n / 2; i++) {
        if(cleaned[i] != cleaned[n - 1 - i]) {
            is_palindrome = 0;
            break;
        }
    }

    if (is_palindrome) printf("C'est un palindrome !!!\n");
    else printf("Ce n'est pas un palindrome !\n");

    return 0;
}