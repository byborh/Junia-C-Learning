#include <stdio.h>
#include <string.h>

int main() {
    int dd, mm, yyyy, DDOut;
    char mois[20];

    // Saisie
    printf("Veuillez saisir un jour de l'année sous format (dd): ");
    scanf("%d", &dd);

    printf("Veuillez saisir un mois de l'année sous format (mm): ");
    scanf("%d", &mm);

    printf("Veuillez saisir une année sous format (yyyy): ");
    scanf("%d", &yyyy);

    // Vérification que la date est valide (optionnel mais utile)
    if (mm < 1 || mm > 12 || dd < 1 || dd > 31) {
        printf("Date invalide.\n");
        return 1;
    }

    // Déterminer le nom du mois
    switch (mm) {
        case 1: strcpy(mois, "janvier"); break;
        case 2: strcpy(mois, "février"); break;
        case 3: strcpy(mois, "mars"); break;
        case 4: strcpy(mois, "avril"); break;
        case 5: strcpy(mois, "mai"); break;
        case 6: strcpy(mois, "juin"); break;
        case 7: strcpy(mois, "juillet"); break;
        case 8: strcpy(mois, "août"); break;
        case 9: strcpy(mois, "septembre"); break;
        case 10: strcpy(mois, "octobre"); break;
        case 11: strcpy(mois, "novembre"); break;
        case 12: strcpy(mois, "décembre"); break;
        default: strcpy(mois, "invalide"); break;
    }

    // Calcul du nombre de jours dans le mois
    switch (mm) {
        case 1: case 3: case 5: case 7: case 8: case 10: case 12:
            DDOut = 31;
            break;
        case 4: case 6: case 9: case 11:
            DDOut = 30;
            break;
        case 2:
            if ((yyyy % 4 == 0 && yyyy % 100 != 0) || (yyyy % 400 == 0))
                DDOut = 29;
            else
                DDOut = 28;
            break;
        default:
            printf("Mois invalide.\n");
            return 1;
    }

    // Vérification que le jour est valide selon le mois
    if (dd > DDOut) {
        printf("Jour invalide pour ce mois.\n");
        return 1;
    }

    // Affichage
    printf("Voici la date d'aujourd'hui : %02d-%s-%d\n", dd, mois, yyyy);
    printf("Il reste %d jour(s) avant la fin du mois.\n", DDOut - dd);

    return 0;
}
