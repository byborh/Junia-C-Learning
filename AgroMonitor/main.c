#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define MAX_MESURES 15

/*
    Pour contrôler l’irrigation de ses champs, un agriculteur a installé un capteur de température et des
    capteurs d’humidité dans des emplacements distants sur le champ.

    Il a chargé un ouvrier pour prendre les mesures indiquées par les capteurs un nombre de fois défini
    par jour par l’utilisateur. Dans ce sens, il souhaite avoir une application qui permet de faciliter la
    tâche de contrôle d’irrigation.

    L’application permettra à l’ouvrier de :
        • Spécifier le nombre de mesures journalières (maximum 15)
        • Saisir les données de température (int) et humidité (int) pour les différentes mesures pour
        un capteur (utiliser la fonction rand() pour remplir les tableaux)

        NB : Chaque type de mesure est indépendant de l’autre.

    Programmer les fonctions suivantes :
        1. Afficher les mesures de température
        2. Afficher les mesures de l’humidité
        3. Modifier la valeur d’une prise donnée (température ou humidité) par son numéro
        4. Calculer et afficher l’humidité maximale et minimale et leurs numéros de prise associée.
        5. Calculer et afficher la moyenne humidité et température.
        6. Calculer et afficher l’écart type de l’humidité pour détecter les pannes du système
        d’irrigation.
*/

void afficherMesures(const int mesures[], int n, const char* label);
void modifierMesure(int mesures[], int n, const char* label);
void afficherMinMaxHumidite(const int humidites[], int n);
void calculerMoyennes(const int temperatures[], const int humidites[], int n);
void calculerEcartTypeHumidite(const int humidites[], int n);

int main() {
    int temperatures[MAX_MESURES], humidites[MAX_MESURES];
    int nbMesures;
    int choix;

    srand(time(NULL)); // Initialiser le générateur aléatoire

    // Demander le nombre de mesures à effectuer
    do {
        printf("Combien de prises de mesures souhaitez-vous faire ? (1 à %d) : ", MAX_MESURES);
        scanf("%d", &nbMesures);
    } while (nbMesures < 1 || nbMesures > MAX_MESURES);

    // Génération aléatoire des mesures
    for (int i = 0; i < nbMesures; i++) {
        temperatures[i] = rand() % 41;  // Température entre 0 et 40
        humidites[i] = rand() % 101;    // Humidité entre 0 et 100
    }

    // Menu utilisateur
    do {
        printf("\n=========== MENU AGRO-MONITOR ===========\n");
        printf("1. Afficher les mesures de température\n");
        printf("2. Afficher les mesures d'humidité\n");
        printf("3. Modifier une mesure (température ou humidité)\n");
        printf("4. Afficher humidité min et max avec indices\n");
        printf("5. Afficher les moyennes température et humidité\n");
        printf("6. Calculer l'écart-type de l'humidité\n");
        printf("0. Quitter\n");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1:
                afficherMesures(temperatures, nbMesures, "Température");
                break;
            case 2:
                afficherMesures(humidites, nbMesures, "Humidité");
                break;
            case 3:
                modifierMesure(temperatures, nbMesures, "Température");
                modifierMesure(humidites, nbMesures, "Humidité");
                break;
            case 4:
                afficherMinMaxHumidite(humidites, nbMesures);
                break;
            case 5:
                calculerMoyennes(temperatures, humidites, nbMesures);
                break;
            case 6:
                calculerEcartTypeHumidite(humidites, nbMesures);
                break;
            case 0:
                printf("Fin du programme.\n");
                break;
            default:
                printf("Choix invalide, veuillez réessayer.\n");
        }
    } while (choix != 0);

    return 0;
}

// j'ffiche un tableau de mesures
void afficherMesures(const int mesures[], int n, const char* label) {
    printf("\nMesures de %s :\n", label);
    for (int i = 0; i < n; i++) {
        printf("  Prise %2d : %d\n", i + 1, mesures[i]);
    }
}

// modifier une mesure
void modifierMesure(int mesures[], int n, const char* label) {
    int index, nouvelleValeur;

    printf("\nModification de la mesure de %s\n", label);
    printf("Entrez le numéro de la prise à modifier (1 à %d) : ", n);
    scanf("%d", &index);

    if (index < 1 || index > n) {
        printf("Indice invalide.\n");
        return;
    }

    printf("Ancienne valeur : %d\n", mesures[index - 1]);
    printf("Nouvelle valeur : ");
    scanf("%d", &nouvelleValeur);

    mesures[index - 1] = nouvelleValeur;
    printf("Modification réussie.\n");
}

// Affiche l'humidité maximale et minimale avec leurs indices
void afficherMinMaxHumidite(const int humidites[], int n) {
    int min = humidites[0], max = humidites[0];
    int idxMin = 0, idxMax = 0;

    for (int i = 1; i < n; i++) {
        if (humidites[i] < min) {
            min = humidites[i];
            idxMin = i;
        }
        if (humidites[i] > max) {
            max = humidites[i];
            idxMax = i;
        }
    }

    printf("\nHumidité minimale : %d (prise %d)\n", min, idxMin + 1);
    printf("Humidité maximale : %d (prise %d)\n", max, idxMax + 1);
}

// Calculer et afficher les moyennes
void calculerMoyennes(const int temperatures[], const int humidites[], int n) {
    float sommeTemp = 0, sommeHum = 0;

    for (int i = 0; i < n; i++) {
        sommeTemp += temperatures[i];
        sommeHum += humidites[i];
    }

    printf("\nMoyenne des températures : %.2f\n", sommeTemp / n);
    printf("Moyenne de l'humidité    : %.2f\n", sommeHum / n);
}

// Calcul de l'écart-type pour l'humidité
void calculerEcartTypeHumidite(const int humidites[], int n) {
    float moyenne = 0, sommeCarres = 0, ecartType;

    // Calcul de la moyenne
    for (int i = 0; i < n; i++) {
        moyenne += humidites[i];
    }
    moyenne /= n;

    // Calcul de la somme des carrés des écarts
    for (int i = 0; i < n; i++) {
        sommeCarres += pow(humidites[i] - moyenne, 2);
    }

    ecartType = sqrt(sommeCarres / n);

    printf("\nÉcart-type de l'humidité : %.2f\n", ecartType);

    // Diagnostic simple
    if (ecartType < 5) {
        printf("Humidité très stable. vérifies juste que le capteur fonctionne bien.\n");
    } else if (ecartType > 25) {
        printf("Alerte : Variations importantes détectées. Risque de panne ou problème d'irrigation.\n");
    }
}
