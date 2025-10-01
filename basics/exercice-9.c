#include <stdio.h>
#include <string.h>
#include <stdbool.h>

int main() {
    /*
        Écrire un programme qui permet de saisir un nombre et de déterminer s’il est « un nombre
        premier » (un nombre premier est un nombre qui n’admet que deux divisions : une par lui-même
        et une par 1).
    */

    int n;
    bool isPremier = true;

    printf("Veuillez saisir un nombre qui permet de saisir un nombre et de déterminer s’il est premier ou pas !\n");
    scanf("%d", &n);

    if(n <= 1) {
        isPremier = false;
        printf("%d n'est pas un nombre premier.\n", n);
        return 0;
    } else {
        for(int i = 2; i <= n / 2; i++) {
            if(n % i == 0) {
                isPremier = false;
                printf("%d n'est pas un nombre premier.\n", n);
                return 0;
            }

        }
    }

    if (isPremier) printf("%d est un nombre premier.\n", n);

    return 0;
}