#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
	float L, l, h;

	longueur: printf("Saisir la longueur de la valise, L=" );
	scanf_s("%f", &L);
	if (L > 150) {
		goto longueur;
	}
	else
	{
	largeur: printf("Saisir la largeur de la valise, l=");
		scanf_s("%f", &l);
	}
	if (l > 150){
		goto largeur;
	}
	else
	{
	hauteur: printf("Saisir la hauteur de la valise, h=");
		scanf_s("%f", &h);
	}
	if (h > 150) {
		goto hauteur;
	}
	else
	{
		printf("La valise fait %f de longueur, %f de largeur et %f de hauteur.\n", L, l, h);
	}

	if (L <= 55){
		printf("Valide\n");
	}
		else
	{
	printf("Non valide\n");
	}

	if (l <= 35)
	{
		printf("Valide\n");
	}
	else
	{
		printf("Non valide\n");
	}
	if (h <= 25)
	{
		printf("Valide\n");
	}
	else
	{
		printf("Non valide\n");
	}
	
	goto longueur;

}
