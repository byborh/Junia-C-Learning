#include <stdio.h>
#include <math.h>

/*
    On souhaite écrire une fonction qui permet de résoudre une équation du second degré. Voici le
    prototype de la fonction : int resoudre2(int a, int b, int c, float *x1, float *x2);
    La fonction retourne le nombre de solution trouvé (0: pas de solution, 1: une solution, 2: deux
    solutions, -1: tout x est solution). Dans le cas où l'équation a une solution, la fonction retourne la
    solution dans x1. Dans le cas où l'équation a deux solutions, la fonction retourne les solutions dans
    x1 et x2.
*/

int quadraticEquation(int a, int b, int c, float *x1, float *x2);

int main() {
    int a = 2;
    int b = -4;
    int c = -6;
    float x1 = 0;
    float x2 = 0;


    printf("Voici les valeurs que je suis en train d'envoyer vers ma fonction a: %d, b: %d, c: %d\n", a, b, c);
    int res = quadraticEquation(a, b, c, &x1, &x2);

    if(res == 1) printf("C'est une fonction seconde degré et il y a en tout 1 solution: %.2f\n", x1);
    else if(res == 2) printf("C'est une fonction seconde degré et il y a en tout 2 solutions: %.2f, %.2f\n", x1, x2);
    else printf("Il n'y a pas de solution ici :(\n");

    return 0;
}

int quadraticEquation(int a, int b, int c, float *x1, float *x2)
{
    // trouver delta d'abord !
    int delta = b*b - 4*a*c; // ou b*b
    printf("Voici la réponse quand je fais le formule pour trouver le delta : %d \n", delta);

    // vérifier si c'est inférieur, égal ou supérieur à 0 !
    if(delta > 0) {
        *x1 = (-b-sqrt(delta))/(2*a);
        *x2 = (-b+sqrt(delta))/(2*a);
        printf("Voici la réponse quand je fais le formule pour trouver x1: %.2f, et x2: %.2f\n", *x1, *x2);
        return 2;
    } else if (delta == 0) {
        // je connais pas le formule avec les nombres complexes...
        *x1 = -b / (2.0 * a);
        
        return 1;
    }
    
    return 0;
}