#include <stdio.h>
#include <string.h>

int main() {
    /*
        Un restaurant souhaite gérer ses plats. Ce restaurant dispose de 4 types de plats : 1- Pizza, 2-Plat
        Escalope, 3-Plat Poulet et 4-Plat Grillade.
        Écrire un programme qui permet d’afficher à l’utilisateur le menu et de lui donner la possibilité de
        choisir un plat.
    */

    char plat1[10] = "Pizza";
    char plat2[10] = "Escalope";
    char plat3[10] = "Poulet";
    char plat4[10] = "Grillade";

    int req;

    printf("Bonjour, voici les plats d'ajourd'hui:\n1) %s\n, 2) %s\n, 3) %s\n, 4) %s\n veuillez choisir un numéro !", plat1, plat2, plat3, plat4);
    scanf("%d", &req);

    if(req == 1) printf("Voici le plat choisi: %s", plat1);
    else if(req == 2) printf("Voici le plat choisi: %s", plat2);
    else if(req == 3) printf("Voici le plat choisi: %s", plat3);
    else if(req == 4) printf("Voici le plat choisi: %s", plat4);
    else printf("Veuillez saisir un chiffre entre 1 et 4 !");
    return 0;
}