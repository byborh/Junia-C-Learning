#include <stdio.h>
#include <string.h>

int main() {

    /*
            Réalisez le jeu de tire des bâtons. Le principe du jeu est simple :
            Deux joueurs choisissent à tour de rôle un nombre de bâtons à tirer parmi une liste de bâtons
            affichés à l’écran. Le nombre de bâtons à tirer doit être compris entre 1 et 3 bâtons. Le joueur qui
            tire le dernier bâton perd la manche.
            Précision : le nombre de bâtons initial est donné par l’utilisateur, le nombre de bâtons doit être
            positif
    */

    int totalBarre = 0;
    int session = 1;
    int playerNumber = 1;

    printf("Veuillez saisir le nombre de barre que vous voulez avoir ! \n");
    scanf("%d", &totalBarre);

    while(totalBarre > 0) {
        printf("Voici combien il vous reste : \n %d \n", totalBarre);
        printf("Joueur numéro %d, veuillez saisir un nombre entre 1 et 3 ! \n", playerNumber);
        scanf("%d", &session);

        if(session <= 3 && session >= 1) {
            totalBarre -= session;
            playerNumber = (playerNumber == 1) ? 2 : 1;
        } else {
            printf("Veuillez saisir un nombre correct entre 1 et 3 ! \n");
        }        
    }

    printf("Félicitation ! le joueur numéro %d a gagné !", playerNumber);


    return 0;
}