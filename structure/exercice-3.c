#include <stdio.h>
#include <string.h>

#define MAX 100

typedef struct {
    int jour;
    int mois;
    int annee;
} Date;

typedef struct {
    char ref[20];
    char nom[50];
    char auteur[50];
    Date date;
} Livre;

void ajouterLivre(Livre t[], int *n);
void afficherLivres(const Livre t[], int n);
void trierLivres(Livre t[], int n);

int main() {
    Livre t[MAX];
    int n = 0;
    int choix;

    do {
        puts("\n--- MENU ---");
        puts("1) Ajouter un livre");
        puts("2) Afficher les livres");
        puts("3) Trier les livres par référence décroissante");
        puts("0) Quitter");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch(choix) {
            case 1: ajouterLivre(t, &n); break;
            case 2: afficherLivres(t, n); break;
            case 3: trierLivres(t, n); break;
            case 0: puts("Au revoir."); break;
            default: puts("Choix invalide.");
        }

    } while(choix != 0);

    return 0;
}

void ajouterLivre(Livre t[], int *n) {
    if (*n >= MAX) {
        printf("La bibliothèque est pleine.\n");
        return;
    }

    Livre temp;
    printf("Référence du livre : ");
    scanf("%19s", temp.ref);

    for(int i = 0; i < *n; i++) {
        if(strcmp(t[i].ref, temp.ref) == 0) {
            printf("Erreur : cette référence existe déjà.\n");
            return;
        }
    }

    printf("Nom du livre : ");
    scanf("%49s", temp.nom);

    printf("Auteur : ");
    scanf("%49s", temp.auteur);

    printf("Date d'édition (jour mois année) : ");
    scanf("%d %d %d", &temp.date.jour, &temp.date.mois, &temp.date.annee);

    t[*n] = temp;
    (*n)++;

    printf("Livre ajouté avec succès.\n");
}

void afficherLivres(const Livre t[], int n) {
    if (n == 0) {
        printf("Aucun livre dans la bibliothèque.\n");
        return;
    }

    for(int i = 0; i < n; i++) {
        printf("[%s] %s - %s (%02d/%02d/%04d)\n",
            t[i].ref,
            t[i].nom,
            t[i].auteur,
            t[i].date.jour,
            t[i].date.mois,
            t[i].date.annee
        );
    }
}

void trierLivres(Livre t[], int n) {
    for(int i = 0; i < n - 1; i++) {
        for(int j = i + 1; j < n; j++) {
            if(strcmp(t[i].ref, t[j].ref) < 0) {
                Livre temp = t[i];
                t[i] = t[j];
                t[j] = temp;
            }
        }
    }

    printf("Tri effectué.\n");
}