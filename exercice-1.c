#include <stdio.h>
#include <string.h>

int main() {
    float moyenne;

    printf("Bonjour, veuillez taper la moyenne que vous avez eu :");
    scanf("%f", &moyenne);

    if(moyenne < 0 || moyenne > 20) {
        printf("Veuillez saisir une bonne moyenne !");
        return 0;
    }

    if(moyenne < 10) {
        printf("redouble");
    } else if(moyenne >= 10 && moyenne < 12) {
        printf("passable");
    } else if(moyenne >= 12 && moyenne < 14) {
        printf("Assez Bien");
    } else if(moyenne >= 14 && moyenne < 16) {
        printf("Bien");
    } else if(moyenne > 16) {
        printf("passable");
    }

    return 0;
}