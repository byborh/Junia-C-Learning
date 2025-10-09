#include <stdio.h>
#include <string.h>

int main() {

    /*    
        Écrire un programme qui remplace toutes les occurrences d'une chaîne de caractères « Chaine1 »
        dans une chaîne de caractères « Originale », par la chaîne « Chaine2 ».
        Ex :
            L       HELLO -> HEO
            an  ont banane -> bontonte
    */
   char originale[100];
   char chaine1[100];
   char chaine2[100];
   char res[200];

    // récupérer 3 inputs de l'utilisateur chaine1, chaine2 et originale
    printf("Veuillez saisir un mot ! \n");
    scanf("%s", originale);

    printf("Veuillez saisir des lettres que vous voulez remplacer ! \n");
    scanf("%s", chaine1);
    
    printf("Par quoi voulez vous les remplacer ? \n");
    scanf("%s", chaine2);

    // parcourir tooouuute la chaîne de caractère
    int positionOfLenghtOfRes = 0;
    int lenOriginale = strlen(originale);
    int lenChaine1 = strlen(chaine1);
    int lenChaine2 = strlen(chaine2);
    // si dans originale, on trouve chaine1, alors, remplacer cette partie par chaine2 en deplaçant les autres char du char
    for(int i = 0; i < lenOriginale; i++) {
        int isExistant = 1;
        // Si chaine1 est dans originale
        for(int j = 0; j < lenChaine1; j++) {
            if(originale[i+j] != chaine1[j]) {
                isExistant = 0;
                break;
            }
        }
        if(isExistant) {
            // ajouter chaine2 dans res
            for(int t = 0; t < lenChaine2; t++) {
                res[positionOfLenghtOfRes + t] = chaine2[t];
                positionOfLenghtOfRes++;
            }
            i += lenChaine1 - 1;
        } else {
            res[positionOfLenghtOfRes] = originale[i];
            positionOfLenghtOfRes++;
        }
    }

    // ajotuer \n à la fin
    res[positionOfLenghtOfRes] = '\0';

    printf("Voici le mot final: %s\n", res);

    return 0;
}

