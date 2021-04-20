#include <stdio.h>

int main (void) {
	int n, i, s;
	printf ("digite um numero");
	scanf ("%d", &n);

	while (i!=n) {
		i+=1;
		s+=i;
	}
	printf ("mostrar o %d\n", s);
		return 0;
}

