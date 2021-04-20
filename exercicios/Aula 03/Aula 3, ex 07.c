#include <stdio.h>
#include <math.h>
int main (void) {

	int conta = 0, nc = 0, soma = 0, r1 = 0, r2 = 0, r3 = 0, r4 = 0, r5 = 0, dig1 = 0, dig2 = 0, dig3 = 0, dig4 = 0, dig5 = 0, dig6 = 0, i = 0;
	printf ("digite numero da conta");
	scanf ("%d", &conta); 

	nc = conta;

     do   { 
        i+=1;
		nc/=10;
		}while(i <= nc);
		printf ("\n %d \n", 1);

		dig1= conta / 100000;
		r1 = conta % 100000;

		dig2 = r1 / 10000;
		r2 = r1 % 10000;

		dig3 = r2 / 1000;
		r3 = r2 % 1000;

		dig4 = r3 / 100;
		r4 = r3 % 100;

		dig5 = r4 /10;
		dig6 = r4 %10;

		soma = (dig1 + dig2 + dig3 + dig4 + dig5 + dig6) % 10;

		printf ("numero da conta %d-%d\n", conta, soma);

	return 0;
}
