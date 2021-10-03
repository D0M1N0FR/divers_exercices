#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(void)
{
	int mode = 0, dif = 0;
	char joueur1, joueur2;
	int nombre = 0, coup = 0, coup1 = 0, coup2 = 0;
	int nombreMystere1 = 0, nombreMystere2 = 0, nombreMystere3 = 0;
	const int MIN1 = 1, MAX1 = 100, MAX2 = 1000, MAX3 = 10000;

	srand(time(NULL));
	nombreMystere1 = (rand() % (MAX1 - MIN1)) + MIN1;
	nombreMystere2 = (rand() % (MAX2 - MIN1)) + MIN1;
	nombreMystere3 = (rand() % (MAX3 - MIN1)) + MIN1;

	//TITRE
	printf("\\\\=== Bienvenue sur : Trouver le nombre mystere !!! ===//\n");

	//CHOIX MODE DE JEU
	do
	{
		printf("\nChoix du mode de jeu :\n\n");
		printf("1. Joueur\n\n");
		printf("2. Joueurs\n\n");
		scanf("%d", &mode);
		
		switch (mode)
		{
		case 1:
			printf("\nVous avez choisi le mode 1 Joueur\n");
			break;
		case 2:
			printf("\nVous avez choisi le mode 2 Joueurs\n");
			break;
		default:
			printf("\nCe mode de jeu n'existe pas\n");
			break;
		}
	} while (mode < 1 || mode > 2);

	printf("\n");

	//MODE SOLO + CHOIX DE LA DIFFICULTE
	if (mode == 1)
	{
		do
		{
			printf("\nChoisissez un mode de difficulté :\n\n");
			printf("1. Normale\n\n");
			printf("2. Difficile\n\n");
			printf("3. Tres difficile\n\n");
			scanf("%d", &dif);

			switch (dif)
			{
				case 1:
					printf("\nVous avez choisi le mode normale /100\n");
					break;
				case 2:
					printf("\nVous avez choisi le mode difficile /1000\n");
					break;
				case 3:
					printf("\nVous avez choisi le mode tres difficile /10000\n");
					break;
				default:
					printf("\nCe niveau de dificulte n'existe pas !\n\n");
					break;
			}
		} while (dif < 1 || dif > 3);

		//DIFFICULTE 1
		if (dif == 1)
		{
			do
			{
				printf("\nQuel est le nombre mystere ?\n\n");
				scanf("%d", &nombre);

				if (nombre > nombreMystere1)
				{
					printf("\nC'est moins !\n");
					coup++;
				}
				else if (nombre < nombreMystere1)
				{
					printf("\nC'est plus !\n");
					coup++;
				}	
				else
				{
					if (nombre == nombreMystere1 && nombreMystere1 < 10)
						printf("\nVous avez trouve le chiffre mystere en %d coups!!!\n", coup);
					else
						printf("\nVous avez trouve le nombre mystere en %d coups!!!\n", coup);
				}
			} while (nombre != nombreMystere1);
		}

		//DIFFICULTE 2
		else if (dif == 2)
		{
			do
			{
				printf("\nQuel est le nombre mystere ?\n\n");
				scanf("%d", &nombre);

				if (nombre > nombreMystere2)
				{
					printf("\nC'est moins !\n");
					coup++;
				}
				else if (nombre < nombreMystere2)
				{
					printf("\nC'est plus !\n");
					coup++;
				}	
				else
				{
					if (nombre == nombreMystere2 && nombreMystere2 < 10)
						printf("\nVous avez trouve le chiffre mystere en %d coups!!!\n", coup);
					else
						printf("\nVous avez trouve le nombre mystere en %d coups!!!\n", coup);
				}
			} while (nombre != nombreMystere2);
		}

		//DIFFICULTE 3
		else
		{
			do
			{
				printf("\nQuel est le nombre mystere ?\n\n");
				scanf("%d", &nombre);

				if (nombre > nombreMystere3)
				{
					printf("\nC'est moins !\n");
					coup++;
				}
				else if (nombre < nombreMystere3)
				{
					printf("\nC'est plus !\n");
					coup++;
				}	
				else
				{
					if (nombre == nombreMystere3 && nombreMystere3 < 10)
						printf("\nVous avez trouve le chiffre mystere en %d coups!!!\n", coup);
					else
						printf("\nVous avez trouve le nombre mystere en %d coups!!!\n", coup);
				}
			} while (nombre != nombreMystere3);
		}
	}

	//MODE MULTI + NOMS JOUEURS + CHOIX DE LA DIFFICULTE
	else
	{
		printf("Nom Joueur 1 :\n\n");
		scanf("%15s", &joueur1);
		printf("\nNom Joueur 2 :\n\n");
		scanf("%15s", &joueur2);

		do
		{
			printf("\nChoisissez un mode de difficulté :\n\n");
			printf("1. Normale\n");
			printf("2. Difficile\n");
			printf("3. Tres difficile\n\n");
			scanf("%d", &dif);

			switch (dif)
			{
				case 1:
					printf("\nVous avez choisi le mode normale /100\n");
					break;
				case 2:
					printf("\nVous avez choisi le mode difficile /1000\n");
					break;
				case 3:
					printf("\nVous avez choisi le mode tres difficile /10000\n");
					break;
				default:
					printf("\nCe niveau de dificulte n'existe pas !\n\n");
					break;
			}
		} while (dif < 1 || dif > 3);

		//DIFFICULTE 1
		if (dif == 1 )
		{
			do
			{
				//JOUEUR 1
				printf("\n%d : Quel est le nombre mystere ?\n\n", joueur1);
				scanf("%d", &nombre);

				if (nombre > nombreMystere1)
				{
					printf("\nC'est moins !\n");
					coup1++;
				}
				else if (nombre < nombreMystere1)
				{
					printf("\nC'est plus !\n");
					coup1++;
				}	
				else
				{
					if (nombre == nombreMystere1 && nombreMystere1 < 10)
						printf("\nVous avez trouve le chiffre mystere en %d coups!!!\n", coup);
					else
						printf("\nVous avez trouve le nombre mystere en %d coups!!!\n", coup);
				}

				//JOUEUR 2
				printf("\n%d : Quel est le nombre mystere ?\n", joueur2);
				scanf("%d", &nombre);

				if (nombre > nombreMystere1)
				{
					printf("\nC'est moins !\n");
					coup2++;
				}
				else if (nombre < nombreMystere1)
				{
					printf("\nC'est plus !\n");
					coup2++;
				}	
				else
				{
					if (nombre == nombreMystere1 && nombreMystere1 < 10)
						printf("\nVous avez trouve le chiffre mystere en %d coups!!!\n", coup);
					else
						printf("\nVous avez trouve le nombre mystere en %d coups!!!\n", coup);
				}
			} while (nombre != nombreMystere1);
		}

		//DIFFICULTE 2
		if (dif == 2 )
		{
			do
			{
				//JOUEUR 1
				printf("\n%d : Quel est le nombre mystere ?\n\n", joueur1);
				scanf("%d", &nombre);

				if (nombre > nombreMystere2)
				{
					printf("\nC'est moins !\n");
					coup1++;
				}
				else if (nombre < nombreMystere2)
				{
					printf("\nC'est plus !\n");
					coup1++;
				}	
				else
				{
					if (nombre == nombreMystere2 && nombreMystere2 < 10)
						printf("\nVous avez trouve le chiffre mystere en %d coups!!!\n", coup);
					else
						printf("\nVous avez trouve le nombre mystere en %d coups!!!\n", coup);
				}

				//JOUEUR 2
				printf("\n%ds : Quel est le nombre mystere ?\n", joueur2);
				scanf("%d", &nombre);

				if (nombre > nombreMystere2)
				{
					printf("\nC'est moins !\n");
					coup2++;
				}
				else if (nombre < nombreMystere2)
				{
					printf("\nC'est plus !\n");
					coup2++;
				}	
				else
				{
					if (nombre == nombreMystere2 && nombreMystere2 < 10)
						printf("\nVous avez trouve le chiffre mystere en %d coups!!!\n", coup);
					else
						printf("\nVous avez trouve le nombre mystere en %d coups!!!\n", coup);
				}
			} while (nombre != nombreMystere2);
		}

		//DIFFICULTE 3
		if (dif == 3 )
		{
			do
			{
				//JOUEUR 1
				printf("\n%d : Quel est le nombre mystere ?\n\n", joueur1);
				scanf("%d", &nombre);

				if (nombre > nombreMystere3)
				{
					printf("\nC'est moins !\n");
					coup1++;
				}
				else if (nombre < nombreMystere3)
				{
					printf("\nC'est plus !\n");
					coup1++;
				}	
				else
				{
					if (nombre == nombreMystere3 && nombreMystere3 < 10)
						printf("\nVous avez trouve le chiffre mystere en %d coups!!!\n", coup);
					else
						printf("\nVous avez trouve le nombre mystere en %d coups!!!\n", coup);
				}

				//JOUEUR 2
				printf("\n%ds : Quel est le nombre mystere ?\n", joueur2);
				scanf("%d", &nombre);

				if (nombre > nombreMystere3)
				{
					printf("\nC'est moins !\n");
					coup2++;
				}
				else if (nombre < nombreMystere3)
				{
					printf("\nC'est plus !\n");
					coup2++;
				}	
				else
				{
					if (nombre == nombreMystere3 && nombreMystere3 < 10)
						printf("\nVous avez trouve le chiffre mystere en %d coups!!!\n", coup);
					else
						printf("\nVous avez trouve le nombre mystere en %d coups!!!\n", coup);
				}		
			} while (nombre != nombreMystere3);
		}
	}

	return (0);
}