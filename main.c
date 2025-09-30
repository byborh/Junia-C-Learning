#include <stdio.h>
#include <string.h>

int main() {
	// char nom[50];
	// char prenom[50];
  	
  // printf("c quoi ton nom: ");
  // scanf("%49s", nom);
  
  // printf("c quoi ton prenom: ");
  // scanf("%49s", prenom);
  
  // printf("Bonjour %s %s\n", nom, prenom);


  float note1, note2, moy, coef1, coef2;

  printf("note1:");
  scanf("%f", &note1);

  printf("note2:");
  scanf("%f", &note2);

  printf("coef1:");
  scanf("%f", &coef1);

  printf("coef2:");
  scanf("%f", &coef2);

  moy = ((note1*coef1)+(note2*coef2)) / (coef1 + coef2);

  // Apprendre à faire des conditions avec if
  if(moy < 10) printf("T'es vrm une grosse merde enft `\n");
  else if (moy < 15 && moy > 10) printf("Bien !`\n");
  else printf("TROP FORT `\n");

  // Apprendre à faire des conditions avec switch
  switch((int)moy) {
    case 12:
      printf("Tu as 12 de moyenne, lesgoo\n");
      break;
    // default: // Default est facultatif finalement...
    //   printf("Désolé, tu n'as pas eu 12, j'aurais pu t'augmenter la moyenne...");
    //   break;
  }

  printf("\nRésultat: %.2f", moy);

  // for (int i=1; i <= 10; i++) {
  //   printf("\nBonjour le numéro %d", i); 
  // }
    
  return 0;
}