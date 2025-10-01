#include <stdio.h>
#include <string.h>

int main() {
    /*
        Écrire un programme qui calcule le min de trois entiers saisis au clavier. 
    */

    int a, b, c;

    printf("Veuillez saisir une première valeur :");
    scanf("%d", & a);

    printf("Veuillez saisir une première valeur :");
    scanf("%d", & b);

    printf("Veuillez saisir une première valeur :");
    scanf("%d", & c);

    int min = a;

    if(min > b) min = b;
    if(min > c) min = c;

    printf("Voici la velur minimale entre ces 3 : %d", min);
    return 0;
}