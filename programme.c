#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[])
{
  int age = 0; // On initialise la variable à 0
  int an = 2022;
  
  printf("Quel age avez-vous ? ");
  scanf("%d", &age); // On demande d'entrer l'âge avec scanf
  printf("Ah ! Vous avez donc %d ans !\n\n", age);
  
  printf("Tu es donc né en %d", an - age);
       
  return 0;
}