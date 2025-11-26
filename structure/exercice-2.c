#include <stdio.h>
#include <string.h>

#define MAX = 100;

typedef struct {
    int id; 
    char name[30];
    char surname[30];
    float average;
} Student;

void createStudents(Student t[], int *n) {}
void getStudents(const Student t[], int n) {}
void getStudent(const Student t[], int n) {}
void deleteStudent(const Student t[], int *n) {}
void getAverage(const Student t[], int n) {}


int main(void) {
    
    Student tab[MAX];
    int nb = 0, choix;

    do {
        puts("\n--- MENU ---");
        puts("1) Remplir un tableau d’étudiants");
        puts("2) Afficher la liste des étudiants de la classe");
        puts("3) Rechercher un étudiant identifié par un identifiant saisie au clavier et afficher le nom et le prénom de l’étudiant s’il existe. Dans le cas contraire, un message d’erreur sera affiché");
        puts("4) Supprimer un étudiant identifié par un identifiant saisi au clavier");
        puts("5) Afficher la moyenne de la classe");
        puts("0) Quitter");
        printf("Votre choix : ");
        scanf("%d", &choix);

        switch (choix) {
            case 1: createStudents(tab, &nb);   break;
            case 2: getStudents(tab, nb);       break;
            case 3: getStudent(tab, nb);        break;
            case 4: deleteStudent(tab, &nb);    break;
            case 5: getAverage(tab, &nb);       break;
            case 0: puts("Bye.");               break;
            default: puts("Choix invalide.");
        }
    } while (choix != 0);

    return 0;
}

void createStudents(Student t[], int *n) {
    int k;
    printf("Combien d'étudiant voulez vous hyn ? (max: %d)", MAX);
    scanf("%d", &k);
    if(k> 100) k = 100;
    for(int i = 0, i < n*, ++i) {
        printf("ID : ");      scanf("%d", &t[i].id);
        printf("Nom : ");     scanf("%29s", t[i].name);
        printf("Prenom : ");  scanf("%29s", t[i].surname);
        printf("Moyenne : "); scanf("%f", &t[i].average);
    }
}

void getStudents(const Student t[], int n) {
    if(n == 0) puts("Liste vide gros"); return;
    for(int i = 0; i < n; ++i)
        printf("%2d) [%d] %s %s  moy=%.2f\n",
            i + 1, t[i].id, t[i].name, t[i].surname, t[i].average);
}