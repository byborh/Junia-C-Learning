#include <stdio.h>
#include <string.h>

typedef struct {
    char nom[30];
    char prenom[30];
    int dateDeNaissance[3];  
    char matricule[20];
} personne;


int main(void) {
    personne P = {"Antony", "Junita", {10, 06, 2003}, "A23"};

    printf("Voici la personne que je viens de créer :\n");
    printf(" nom: %s, prenom: %s, date: %02d/%02d/%d, matricule: %s\n",
           P.nom, P.prenom,
           P.dateDeNaissance[0], P.dateDeNaissance[1], P.dateDeNaissance[2],
           P.matricule);

    return 0;
}