#include <stdio.h>

int main(void)
{
    int nombre_entier = 0;

    printf("Taper un nombre entier :\n");
    scanf("%d", &nombre_entier);

    printf("Valeur en octal : %o\n", nombre_entier);
    printf("Valeur en hexadecimal : %x\n", nombre_entier);

    return (0);
}