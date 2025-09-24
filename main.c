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


  float note1, note2, moy;
  float coef1, coef2;

  printf("note1:");
  scanf("%f", &note1);

  printf("note2:");
  scanf("%f", &note2);

  printf("coef1:");
  scanf("%f", &coef1);

  printf("coef2:");
  scanf("%f", &coef2);

  moy = ((note1*coef1)+(note2*coef2)) / (coef1 + coef2);

  if(moy < 10) printf("T'es vrm une grosse merde enft `\n");
  else if (moy < 15 && moy > 10) printf("Bien !`\n");
  else printf("TROP FORT `\n");

  printf("Résultat: %.2f", moy);
    
  return 0;
}