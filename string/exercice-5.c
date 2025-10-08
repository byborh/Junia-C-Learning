#include <stdio.h>
#include <string.h>

int main() {

    /*    
        On appelle palindrome une suite de caractères qui se lit de la même façon dans les deux sens
        (exemple : ‘’ laval ‘’, ‘’ressasser ‘’, ‘’engage le jeu que je le gagne’’…).
        Écrire un programme qui permet de déterminer si une suite de caractères est un palindrome. Il
        devra pouvoir traiter des mots autant que des phrases.
    */

    
    char palindrome[100];


    printf("Veuillez saisir quelque chose: \n");
    fgets(palindrome, sizeof(palindrome), stdin);

    int palindrome_length = strlen(palindrome);


    // Supprimer les sauts de lignes 
    

    for(int i = 0; i < palindrome_length / 2; i++) {
        if(palindrome[i] != palindrome[palindrome_length - 1 - i]) {
            printf("C'est pas un mot palindrome !");
            return 0;
        }
    }

    printf("C'est un mot palindrome !!!");
    
    return 0;
}

