#include <stdio.h>

int main()
{
float raio;
printf("\n Qual o Raio? ");
	scanf("%f", raio);
	float perim = 2*3.14*raio;
	printf("Perimetro = %f \n", perim);
	return 0;
}