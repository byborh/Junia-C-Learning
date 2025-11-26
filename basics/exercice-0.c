#include <stdio.h>
#include <string.h>

int main() {
    int temps;
    int heures, minutes, secondes;

    printf("Combien de secondes :");
    scanf("%d", &temps);

    heures = temps / 3600;
    minutes = (temps % 3600) / 60;
    secondes = temps % 60;
    

    printf("Voici la réponse: %d heures, %d minutes, %d secondes.", heures, minutes, secondes);

    return 0;
}