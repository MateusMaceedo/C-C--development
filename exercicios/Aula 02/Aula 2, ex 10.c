#include <stdio.h>
#include <math.h>

int main (void) {
	
	float x, y;
	char o;
	printf ("expressao? ");
	scanf ("%f %c %f", &x, &o, &y);
	switch (o) {
		case '+': printf ("valor = %.2f\n", x+y); break;
		case '-': printf ("valor = %.2f\n", x-y); break;
		case '*': printf ("valor = %.2f\n", x*y); break;
		case '/': printf ("valor = %.2f\n", x/y); break;
		default : printf("operador invalido: %c\n",o);
}
	return 0;
}
