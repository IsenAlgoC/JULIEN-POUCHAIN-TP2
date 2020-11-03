

#include <stdlib.h>
#include <math.h>
#include <stdio.h>

int main()
{
	int n,s,i;
	s = 0;
	printf("Saisir la valeur n=");
	scanf_s("%d", &n);
	printf("La valeur saisie est %d\n", n);
	

	for ( i=1; i <= 100; i++)
	{
		n = n + i;
		s = s + n;
	}
	printf(" n est %d\n", n);
	printf("la somme des n est %d\n", s);

	int p, t;
	p = 1;
	t = 1;
	while (p < 100) {
		p = p + 1;
		t = t + p;
	}
	printf("la somme des n est %d\n", t);

	int r, c;
	r = 1;
	c = 1;
	do 
	{
		r = r + 1;
		c = c + r;
	} while (r < 100);
		printf("la somme des n est %d\n", c);

		unsigned short int m;
		int a;
		m = 1;
		a = 0;

		while (USHRT_MAX - m >= a) {
			a = a + 1;
			m = m + a;
		}
		printf("La valeur maximale de n est %d\n", a);
		printf("La somme des n premiers nombres est %d\n", m);



	}


// Exécuter le programme : Ctrl+F5 ou menu Déboguer > Exécuter sans débogage
// Déboguer le programme : F5 ou menu Déboguer > Démarrer le débogage