#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(int argc, char *argv[])
{

    char response;
    do
    {
        int chiffreUtilisateur = 0;
        srand(time(NULL));
        int chiffreOrdinateur = rand() % 10;

        printf("====================================\n");
        printf("\n");
        printf("Rentrer un chiffre entre 1 et 10 : ");
        printf("\n");
        printf("\n");
        scanf("%d", &chiffreUtilisateur);
        if (chiffreUtilisateur < 1 || chiffreUtilisateur > 10)
        {
            do
            {
                printf("\n\nVous devez écrire un chiffre entre 1 et 10? Écrivez Y(es) or N(o) si vous voulez recommencer: ");
                getchar();
                response = getchar();
                getchar();
            } while (response == 'Y' || response == 'y');                // if response is Y or y then program runs again
            printf("Merci d'avoir essayé ce programme. Au revoir!\n\n"); // if not Y or y, program terminates
            return 0;
        }

        printf("\n");

        if (chiffreUtilisateur != chiffreOrdinateur)
        {
            printf("Vous avez perdu... :(\n");
            printf("\n");
            printf("Le chiffre de l'ordinateur était %d\n", chiffreOrdinateur);
            printf("\n");
            printf("====================================\n");
        }
        else
        {
            printf("Vous avez gagné ! :)\n");
            printf("\n");
            printf("Le chiffre de l'ordinateur était %d\n", chiffreOrdinateur);
            printf("\n");
            printf("====================================\n");
        }
        printf("\n\nvous vouvez réessayer? Écrivez Y(es) or N(o): ");
        getchar();
        response = getchar();
        getchar();
    }

    while (response == 'Y' || response == 'y');                  // if response is Y or y then program runs again
    printf("Merci d'avoir essayé ce programme. Au revoir!\n\n"); // if not Y or y, program terminates
    return 0;
}