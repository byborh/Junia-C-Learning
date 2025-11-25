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
    int* min = malloc(sizeof(int));
    int* max = malloc(sizeof(int));

    *min = INT_MAX;
    *max = INT_MIN;

    if(min == NULL || max == NULL) {
        printf("Errur d'allocaion de mémoire\n");
        return 1;
    }

    int* tab = (int*)calloc(5, sizeof(int[]));

    *tab[] = {4, 5, 78, 1, 77}

    returnMinMaxOfTable(tab, min, max);

    printf("Voici le minimum du tableau: %d et voici donc le maximum: %d\n", *min, *max);

    free(min);
    free(max);

    return 0;
}