#include <stdio.h>
#include <math.h>

int main(void)
{
    float C,F;
	printf("Informe a temperatura em Fahrenheit:\n");
	scanf("%f",&F);
	C = (F-32)*5/9;
	printf("A temperatura em graus Celsius e: %1.2f \n",C);
    return 0;
}