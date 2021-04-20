#include <stdio.h>
#include <math.h>

int main (void) {

	int x, y, pot = 0, i = 0, count = 0;

	printf ("escreva com o valor de x:");
	scanf ("%d", &x);
	printf ("escreva com o valor de y: ");
	scanf ("%d", &y);

	for (i>0; i<y; i++)
	{
		pot = x*(x*i);
	}
	printf ("%d", i);
	printf ("\no valor de x se elvado a y sera de: %d\n", pot);

	return 0;
}
