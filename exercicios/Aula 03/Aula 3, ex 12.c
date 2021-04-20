#include <stdio.h>
#include <stdlib.h>
#include <math.h>

int main (void) {

	int valor, soma = 1, par = 3;
	float raiz;

	printf ("informe um numero\n");
	scanf ("%d", &valor);
	if ( valor < 0)
	{
		printf ("numero negativo nao tem raiz\n");
		break;
	}
	raiz = sqrt (valor); 
	printf ("a raiz de %.2f", raiz);
	system ("pause");
	return 0;
}
