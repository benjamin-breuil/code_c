#include <stdio.h>
#include <stdlib.h>

int main(int argc, char *argv[]) // Équivalent de int main()
{
    int choixMusique;

    printf("=== Musique Dispo ===\n");
    printf("1. Fu*ked Up de Yannou JR\n");
    printf("2. J'comprends pas de PNL\n");
    printf("3. Zepeck de Mapess\n");
    printf("4. J'fais mes affaires de Djadja et Dinaz\n");
    printf("Votre choix ?\n");
    printf("======================\n");

    scanf("%d", &choixMusique);

    switch (choixMusique)
    {
    case 1: 
        printf("Vous avez choisis Fu*ked Up de Yannou JR \n");
        break;
    case 2: 
        printf("Vous avez choisis J'comprends pas de PNL \n");
        break;
    case 3: 
        printf("Vous avez choisis Zepeck de Mapess \n");
        break;
    case 4: 
        printf("Vous avez choisis J'fais mes affaires de Djadja et Dinaz \n");
        break;
    default:
    
        printf("Vous n'avez pas rentré un nombre valide ! \n");
        break;
    }

        return 0;
}