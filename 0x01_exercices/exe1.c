#include <stdio.h>

/**
 * Ecrire un programme qui demande un nombre entier a l'utilisateur
 * et affiche la valeur de la saisie en octal et hexadecimal
 * 
 * - Formater en octal > %o
 * - Formater en hexa > %x ou %X
 */

int main(void)
{
    int nombre_entier = 0;

    printf("Taper un nombre entier :\n");
    scanf("%d", &nombre_entier);

    printf("Valeur en octal : %o\n", nombre_entier);
    printf("Valeur en hexadecimal : %x\n", nombre_entier);

    return (0);
}