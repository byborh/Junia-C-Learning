#include <stdio.h>
#include <limits.h>

/*    
    Écrire une fonction Min( ) et une fonction Max( ) permettant de déterminer respectivement le
    minimum et le maximum de deux entiers passés en paramètres.
    Écrire un programme qui calcule le maximum et le minimum de 4 entiers en se servant de ces deux
    fonctions.

*/

void Min(int v1, int v2, int* min) {
    if(v1 <= v2) *min = v1;
    else *min = v2;
}

void Max(int v1, int v2, int* max) {
    if(v1 <= v2) *max = v2;
    else *max = v1;
}

int main() {
    int a = 451111;
    int b = 39;
    int c = 12;
    int d = 2;

    int min = 0;
    int max = 0;

    Min(a, b, &min);
    Min(min, c, &min);
    Min(min, d, &min);

    Max(a, b, &max);
    Max(max, c, &max);
    Max(max, d, &max);

    printf("Voici le minimum entre ces 4 variables: %d et voici le maximum : %d\n", min, max);
    return 0;
}