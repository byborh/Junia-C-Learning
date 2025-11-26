#include <stdio.h>
#include <string.h>

int main() {

    /*    
        Écrire un programme qui calcule la longueur d’une chaîne de caractères, sans utiliser la
        bibliothèque <string.h>.
    */

    char c[] = "abcdefg";
    int i = 0;
    while(c[i] != '\0') i++;
    printf("Voici le nombre de char dans c[]: %d !", i);
}

