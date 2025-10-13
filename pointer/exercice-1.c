#include <stdio.h>

int main() {
    // Déclaration des variables
    int A = 1;  // A = 1
    int B = 2;  // B = 2
    int C = 3;  // C = 3
    int* P1 = NULL;
    int* P2 = NULL;

    // P1 pointe vers A → *P1 = A = 1
    P1 = &A;
    printf("***_1_***\n");
    printf("La valeur de P1 est %d !\n", *P1); // 1

    // P2 pointe vers C → *P2 = C = 3
    P2 = &C;
    printf("***_2_***\n");
    printf("La valeur de P1 est %d, de P2 est %d !\n", *P1, *P2); // 1, 3

    // *P2 = (*P1)++
    // → *P2 prend la valeur actuelle de *P1 (1), puis *P1 (A) est incrémenté à 2
    // Donc C = 1, A = 2
    *P2 = (*P1)++;
    printf("***_3_***\n");
    printf("La valeur de P1 est %d, de P2 est %d !\n", *P1, *P2); // 2, 1

    // P1 = P2 → P1 pointe maintenant vers C
    P1 = P2;
    printf("***_4_***\n");
    printf("La valeur de P1 est %d, de P2 est %d !\n", *P1, *P2); // 1, 1

    // P2 = &B → P2 pointe maintenant vers B
    P2 = &B;
    printf("***_5_***\n");
    printf("La valeur de P1 est %d, de P2 est %d !\n", *P1, *P2); // 1, 2

    // *P1 -= *P2 → *P1 (C) = 1 - 2 = -1
    // Donc C = -1
    *P1 -= *P2;
    printf("***_6_***\n");
    printf("La valeur de P1 est %d, de P2 est %d !\n", *P1, *P2); // -1, 2

    // ++*P2 → *P2 (B) = 2 + 1 = 3
    // Donc B = 3
    ++*P2;
    printf("***_7_***\n");
    printf("La valeur de P1 est %d, de P2 est %d !\n", *P1, *P2); // -1, 3

    // *P1 *= *P2 → *P1 (C) = -1 * 3 = -3
    // Donc C = -3
    *P1 *= *P2;
    printf("***_8_***\n");
    printf("La valeur de P1 est %d, de P2 est %d !\n", *P1, *P2); // -3, 3

    // Affichage final des variables A, B, C
    printf("***_9_***\n");
    printf("La valeur de A est %d, de B est %d, de C est %d !\n", A, B, C); // A=2, B=3, C=-3

    /*
        À la fin, ça affiche :
        A = 2  (car il a été incrémenté à l'étape 3)
        B = 3  (car incrémenté à l'étape 7)
        C = -3 (1 - 2 = -1, puis * -3 = -3)
        *P1 = C = -3
        *P2 = B = 3
    */

    return 0;
}