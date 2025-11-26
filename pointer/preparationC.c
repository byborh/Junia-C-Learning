#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Veuillez saisir combien d'éléments vous voulez avoir dans votre tableau :\n");
    scanf("%d", &n);

    int* tab = malloc(n * sizeof(int));
    if(tab == NULL) {
        printf("Échec de l'allocation mémoire.\n");
        return 1;
    }

    for(int i = 0; i < n; i++) {
        tab[i] = i + 1;
    }

    printf("Contenu initial du tableau :\n");
    for (int i = 0; i < n; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    // Agrandissement du tableau
    int new;  // juste un entier
    printf("Combien d'éléments supplémentaires voulez-vous ajouter ?\n");
    scanf("%d", &new);

    int* temp = realloc(tab, (n + new) * sizeof(int));
    if(temp == NULL) {
        printf("Échec du realloc.\n");
        free(tab);
        return 1;
    }

    tab = temp;  // très important !

    // Remplissage des nouvelles cases
    for (int i = n; i < n + new; i++) {
        tab[i] = i + 1;
    }

    printf("Contenu final du tableau après agrandissement :\n");
    for (int i = 0; i < n + new; i++) {
        printf("%d ", tab[i]);
    }
    printf("\n");

    free(tab);
    return 0;
}
