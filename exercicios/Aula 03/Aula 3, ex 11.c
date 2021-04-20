#include <stdio.h>
int main (void) {

	int maximo = 0, minimo, n;

	do {
		printf ("entre com um numero\t");
		scanf ("%d", &n);
		if (n>maximo) 
			maximo=n;
		if (n<minimo)
			minimo=n; 
	
	}while (n!=0);
	printf ("o valor maximo e \t%d\n", maximo);
	printf ("o valor minimo e \t%d\n", minimo);
	return 0;
}
