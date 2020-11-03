
#include <stdio.h>
#include <stdlib.h>

int main()
{
	printf("==== Jeu: PLus ou Moins ====\n\n");
	int nombrechoisi = 0,L, compteur = 0;

	srand(time(NULL));
	L = rand();
	printf("le nombre est %d\n", L);


	do
	{
		while (nombrechoisi != L)
		{
			printf("Entrez le nombre secret:\n");
			scanf_s("%d", &nombrechoisi);
			if (nombrechoisi < L)
			{
				printf("C'est plus\n\n");
			}
			else if (nombrechoisi > L)
			{
				printf("C'est moins\n\n");
			}
			else
			{
				printf("Bravo vous avez trouve le nombre secret en %d coups!", compteur);
			}
			compteur++;
		}
	} while (nombrechoisi != L);

	return 0;


}