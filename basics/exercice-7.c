#include <stdio.h>
#include <string.h>

int main() {

    /*
        Écrire un programme C qui permet d’afficher tous les entiers pairs entre n1 et n2. (n1 et n2 sont
        des valeurs saisies par l’utilisateur)
    */

    int n1, n2;
    int pos = 0;
    char res[150] = "";
    printf("Veuillez saisir un premier nombre: \n");
    scanf("%d", &n1);

    printf("Veuillez saisir un deuxième nombre: \n");
    scanf("%d", &n2);

    for(int i = n1; i >= n1 && i <= n2; i++) {
        if(i % 2 == 0) pos += sprintf(res + pos, "%d, ", i); // à comprendre mieux le sprintf !
    }

    printf("Voici la réponse : \n%s", res);

    return 0;
}