#include <stdio.h>
#include <time.h>

/*
    Étant donné un ensemble E1 de n1 entiers et un ensemble E2 de n2 entiers, écrire les fonctions
    permettant de déterminer l'intersection, la fusion et l'union de ces deux ensembles. (Utiliser une
    fonction pour remplir et une fonction pour afficher un ensemble).
    NB : Les trois fonctions union, intersection et fusion doivent avoir un type de retour void.
*/

void remplir_Tab(int T[], int n);
void afficher_Tab(int T[], int n);
int existe(int x, int T[], int n);
void intersection(int T1[],int n1, int T2[],int n2,int T3[],int* pn3);
void union(int T1[],int n1, int T2[],int n2,int T3[],int* pn3);
void fusion(int T1[],int n1, int T2[],int n2,int T3[],int* pn3);



int main()
{
    int n1, n2, n3 = 0, E1[20], E2[20], E3[50];

    do
    {
        printf("donner le nombre d'elements de E1 : ");
        scanf("%d", &n1);
    }while((n1<0)||(n1>20));

    remplir_Tab(E1,n1);
    afficher_Tab(E1,n1);

    do
    {
        printf("donner le nombre d'elements de E2 : ");
        scanf("%d", &n2);
    }while((n2<0)||(n2>20));

    remplir_Tab(E2,n2);
    afficher_Tab(E2,n2);

    union(E1,n1,E2,n2,E3,&n3);
    printf("Union (E1, E2) : \n");
    afficher_Tab(E3,n3);

    intersection(E1,n1,E2,n2,E3,&n3);
    printf("Inter (E1, E2) : \n");
    afficher_Tab(E3,n3);

    fusion(E1,n1,E2,n2,E3,&n3);
    printf("Fusion (E1, E2) : \n");
    afficher_Tab(E3,n3);

    return 0;
}

// Remplir le taableau !!!
void remplir_Tab(int T[], int n) {
    for(int i = 0; i < n; i++) {
        int rd_num = rand() % (20 - 1 + 1) + 1
        T[i] = rd_num;
    }
}

void afficher_Tab(int T[], int n) {
    for(int i = 0; i < n; i++) {
        printf("%d, ", T[i]);
    }
}

int existe(int x, int T[], int n) {
    return 0;
}

void intersection(int T1[], int n1, int T2[], int n2, int T3[], int *pn3) {
    for(int i = 0; i < n1; i++) {
        for(int j = 0; j < n2; j++) {
            
        }

    }
}

void union(int T1[],int n1, int T2[],int n2,int T3[],int* pn3) {

}

void fusion(int T1[], int n1, int T2[], int n2, int T3[], int *pn3) {
}
