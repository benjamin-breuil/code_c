#include <stdio.h>

int main()
{
    char ascii;

    ascii = 'a';

    printf("Vous voulez savoir ce que représente votre caractre en ASCII?\n");
    printf("Rentrez un caractere : ");
    scanf("%c", &ascii);
    printf("\n");
    printf("\n");

    printf("Votre caractere '%c' en ascii est : %d", ascii, ascii);

    return 0;
}