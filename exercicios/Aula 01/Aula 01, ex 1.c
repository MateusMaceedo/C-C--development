#include <stdio.h>
#include <math.h>

int main ()
{
    float peso = 0, altura = 0, imc = 0;

	printf ("\n Qual o peso:");
	scanf ("%f", &peso);

	printf ("\n Qual e a altura:");
	scanf ("%f", &altura);

	imc = peso/pow(altura,2);

		printf("\n IMC = %.1f \n",imc);
	
	if( imc <= 30)
 		printf ("Nao esta obesa! \n");

	else printf ("esta obesa! \n");
	return 0;
}