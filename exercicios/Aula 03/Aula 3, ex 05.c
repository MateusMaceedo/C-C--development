#include <stdio.h>

int main (void) {
	int fat, n;
	printf ("insira um valor para qual deseja calcular seu fatorial: ");
	scanf ("%d", &n);

	for (fat = 1; n > 1; n = n - 1)
		fat = fat * n;

	printf ("\n fatorial calculado: %d\n", fat);
	return 0;
}
