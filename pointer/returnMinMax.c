#include <stdio.h>
#include <stdlib.h>
#include <limits.h>

void returnMinMaxOfTable(int tab[], int* min, int* max) {
    
    for(int i = 0; i < 5; i++) {
        if(*max < tab[i]) *max = tab[i];
        if(*min > tab[i]) *min = tab[i];
    }
};

int main() {
    int min = INT_MAX;
    int max = INT_MIN;

    int tab[5] = {4, 5, 78, 1, 77};

    returnMinMaxOfTable(tab, &min, &max);

    printf("Voici le minimum du tableau: %d et voici donc le maximum: %d\n", min, max);

    return 0;
}