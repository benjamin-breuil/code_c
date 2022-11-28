#include <stdio.h>
#include <stdlib.h>

int main(int argc, char const *argv[])
{
    int nombreEntre = 0;
    int compteur = 0;

    while (nombreEntre != 47)
    {
        printf("Trouve le chiffre ! ");
        scanf("%d", &nombreEntre);
    }

    while (compteur < 10)
    {
        printf("Bienvenue sur OpenClassrooms !\n");
        compteur++;
    }

    while (1)
    {
        printf("Boucle infinie\n");
    }
    
    return 0;
}
