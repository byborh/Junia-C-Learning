#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    // 1.Remplir un tableau d’entiers et de l’afficher.
    int tab[9] = {0, 1, 2, 3, 3, 5, 2, 0, 0, 0};

    for(int i = 0; i < 10; i++) {
        printf("%d, ", tab[i]);
    }

    // 2.Chercher un entier donné par l’utilisateur
    int value;
    bool isExist = false;
    int numberOfValue = 0;
    printf("Cherchez un entier !\n");
    scanf("%d", &value);

    for(int i = 0; i < 10; i++) {
        if(tab[i] == value) {
            isExist = true;
            // 3.Cherchez le nombre d’occurrences d’un entier saisi au clavier.
            numberOfValue++;           
        }
    }

    if(isExist) {
        printf("Oui, la valeur %d existe dans le tableau ! et il y'en a en tout %d dans le tableau \n", numberOfValue);

        int delete;
        printf("Voulez vous supprimer la première occurrence de cet entier (1), ou les supprimer toutes (2) ?? [Réponse attendue entre '1-2'] \n");
        scanf("%d", &delete);

        if(delete == 1) {
            // 4.Supprimer la première occurrence d’un entier donné par l’utilisateur
            for(int i = 0; i < 10; i++) {
                if(tab[i] == value) {
                    for(int j = tab[i-1]; j < 9; j++) {
                        tab[j] = tab[j+1];
                    }
                }
            }

        } else if(delete == 2) {
            // 5.Supprimer toutes les occurrences d’un entier donné par l’utilisateur
            for(int i = 0; i < 10; i++) {
                if(tab[i] == value) {
                    for(int j = tab[i-1]; j < 9; j++) {
                        tab[j] = tab[j+1];
                    }
                }
            }

        } else {
            printf("Beh d'accord, c'est quoi cette merde encore ??? %d\n", delete);
        }

        // Afficher le tableau finale :
        for(int i = 0; i < 10; i++) {
            printf("%d, ", tab[i]);
        }
    }
    else printf("Non, la valeur %d n'existe pas dans la liste...\n", value);

    return 0;
}