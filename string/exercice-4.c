#include <stdio.h>
#include <string.h>

int main() {

    /*    
        Écrire un programme qui lit deux chaînes de caractères CH1 et CH2 et qui copie la première moitié
        de CH1 et la première moitié de CH2 dans une troisième chaîne CH3 en utilisant :
        a) Les fonctions de la bibliothèque <string.h>.
        b) Uniquement les fonctions printf et gets.
        Afficher le résultat obtenu.
    */

    char CH1[100], CH2[100];


    printf("Veuillez saisir quelque chose: \n");
    scanf("%s", CH1);

    printf("Veuillez saisir autre chose que quelque chose: \n");
    scanf("%s", CH2);


    int CH1_len = strlen(CH1) / 2;
    int CH2_len = strlen(CH2) / 2;


    int CH3_len = CH2_len + CH1_len;
    char CH3[CH3_len + 1];


    for(int i = 0; i < CH1_len; i++) {
        CH3[i] = CH1[i];
    }

    for(int i = 0; i < CH2_len; i++) {
        CH3[CH1_len + i] = CH2[i];
    }

    CH3[CH3_len] = '\0';


    printf("Voici la moitié de vos mots : %d ! \n", CH1_len);
    printf("Voici la moitié de vos mots : %d ! \n", CH2_len);
    printf("Voici le résultat après le merge: \n%s\n", CH3);
    
    return 0;
}

