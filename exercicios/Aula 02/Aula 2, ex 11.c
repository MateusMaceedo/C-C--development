#include <stdio.h>
#include <math.h>

int main (void) {

	float x, y, total;
	char o;

	printf ("expressao?");
	scanf ("%f %c %f", &x, &o, &y);
	switch (o) {
		case '/':
			if (x!=0 && y!=0) {
				total = x/y;
				printf ("total %.1f?", total); 
				}
			else {
				printf ("nao existe numero dividido por 0\n");
			}
	}
	return 0;
}
