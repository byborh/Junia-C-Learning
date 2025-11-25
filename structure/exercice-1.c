#include <stdio.h>

typedef struct P {
    char* Nom;
    char* Prenom;
    int* DateDeNaissance;  
    char* Matricule;
}


int main() {
    struct P personne;
    personne.Prenom = "Antony";
    personne.Nom = "Junita";
    personne.DateDeNaissance = 15072005;

    printf("")
}