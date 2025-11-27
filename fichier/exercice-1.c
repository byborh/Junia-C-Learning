#include <stdio.h>
#include <stdlib.h>

#define MAX 10
/*
Ce qu'on veut de moi :
    - ajouter n gâteaux dans "gateaux.txt"
    - afficher le nombre de gâteaux
    - afficher les caractéristiques du gâteau de la ligne numéro num
    - 
*/

typedef struct
{
    int type;
    int nbr_ing;
    float prix;
} gateau;

void saisir_gateau (gateau *g);
void ajouter_gateau_ft (gateau g, char nom_fich[]);
int nbre_gateaux_ft (char nom_fich[]);
void afficher_gateau (char nom_fich[], int num);


int main() {
    int choix;
    gateau g;
    char nom_fich[] = "gateaux.txt";
    int num;

    do {
        puts("\n--- MENU ---");
        puts("1) Saisir un gâteau");
        puts("2) Ajouter un gâteau au fichier");
        puts("3) Afficher le nombre total de gâteaux dans le fichier");
        puts("4) Afficher un gâteau d'après un numéro de ligne");
        puts("0) Quitter");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                saisir_gateau(&g);
                break;

            case 2:
                ajouter_gateau_ft(g, nom_fich);
                break;

            case 3:
                printf("Nombre total de gâteaux : %d\n", nbre_gateaux_ft(nom_fich));
                break;

            case 4:
                printf("Numéro de ligne : ");
                scanf("%d", &num);
                afficher_gateau(nom_fich, num);
                break;

            case 0:
                puts("Fin du programme.");
                break;

            default:
                puts("Choix invalide.");
        }

    } while (choix != 0);

    return 0;
}


void saisir_gateau (gateau *g) {
    printf("Type du gateau : \n");
    scanf("%d", &g->type);

    printf("Nombre d'ingrédients du gateau : \n");
    scanf("%d", &g->nbr_ing);

    printf("Prix du gateau : \n");
    scanf("%f", &g->prix);
}

void ajouter_gateau_ft (gateau g, char nom_fich[]) {
    FILE *f = fopen(nom_fich, "a");
    if(!f) { printf("Erreur d'ouverture du fichier.\n"); return; }
    fprintf(f, "%d %d %f\n", g.type, g.nbr_ing, g.prix);
    fclose(f);
}


int nbre_gateaux_ft (char nom_fich[]) {
    FILE *f = fopen(nom_fich, "r");
    if(!f) return 0;

    int count = 0;
    gateau g;
    while(fscanf(f, "%d %d %f\n", &g.type, &g.nbr_ing, &g.prix) == 3) {
        count++;
    }

    fclose(f);

    return count;
}


void afficher_gateau (char nom_fich[], int num) {
    FILE *f = fopen(nom_fich, "r");
    if (!f) { printf("Erreur d'ouverture du fichier.\n"); return; }

    gateau g;
    int ligne = 1;
    while(fscanf(f, "%d %d %f\n", &g.type, &g.nbr_ing, &g.prix) == 3) {
        if(num == ligne) {
            printf("\nGâteau à la ligne %d :\n", num);
            printf("Type : %d\n", g.type);
            printf("Ingrédients : %d\n", g.nbr_ing);
            printf("Prix : %.2f\n", g.prix);
            fclose(f);
            return;
        }
        ligne++;
    }

    printf("Aucun gâteau à la ligne %d.\n", num);
    fclose(f);
}