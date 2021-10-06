#include <stdio.h>

/**
 * Ecrire un programme de rendu de monnaie. 
 * En saisissant le montal total des achats puis la somme donnee, indiquer la monnaie a rendre 
 * (en billets de 20, 10, 5 et peices de 2 et 1)
 * 
 * - S'assurer que la somme donnee est bien superieure a la somme achats
 * - Gerer le cas ou on aurait paye egal aux auchats
 * - Rendre le moins de billets/pieces possible (25 de monnaie > 1 billet de 20 + 1 billet de 5)
 * - 0'operateur % (modulo) sera utilile pour cet exercice
 */

int main(void)
{
    int donne = 0, rendu = 0, achat = 0;
    int bill20 = 0, bill10 = 0, bill5 = 0, piece2 = 0, piece = 0;

    printf("Taper le montant total des achats :\n");
    scanf("%d", &achat);
    printf("Taper le montant donnee :\n");
    scanf("%d", &donne);

    if (donne == achat)
        printf("La caissiere ne vous rend rien.\n");
    else if (donne < achat)
        printf("Le compte n'y est pas !\n");
    else
    {
        rendu = donne - achat;
        bill20 = rendu / 20;
        rendu %= 20;
        bill10 = rendu / 10;
        rendu %= 10;
        bill5 = rendu / 5;
        rendu %= 5;
        piece2 = rendu / 2;
        rendu %= 2;
        piece = rendu / 1;
        rendu %= 1;
        rendu = donne - achat;

        if (bill20 > 0)
            printf("Nombre de billet de 20 rendu : %d\n", bill20);
        if (bill10 > 0)
            printf("Nombre de billet de 10 rendu : %d\n", bill10);
        if (bill5 > 0)
            printf("Nombre de billet de 5 rendu : %d\n", bill5);
        if (piece2 > 0)
            printf("Nombre de piece de 2 rendu : %d\n", piece2);
        if (piece > 0)
            printf("Nombre de piece de 1 rendu : %d\n", piece);

        printf("La caissiere vous a rendu un montant total de : %d\n", rendu);
    }

    return (0);
}