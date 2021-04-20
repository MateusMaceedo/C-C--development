#include <stdio.h>

int main () {
int n,i, impar, soma;
soma = 0;
printf ("digite o valor\n");
scanf ("%d", &n);
i = 0;
	impar =-1;
	do {
		impar=impar+2;
		soma=+impar;
		printf ("%d\n", impar);
		i++;}
	while (i<n);

	system ("PAUSE");
	return 0;
}
