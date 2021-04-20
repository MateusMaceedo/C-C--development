#include <stdio.h>

#include <math.h>


int main(void)

{

	float A,B,C,Soma,Raiz,X1,X2;

    printf("Digite o valor de A\n");

	scanf("%f",&A);

	if(A == 0)

	printf("'A' tem que ser diferente de 0\n");

	else

	{

	printf("Digite o valor de B\n");

	scanf("%f",&B);

	printf("Digite o valor de C\n");

	scanf("%f",&C);

	Soma = pow(B,2)-4*A*C;

	Raiz = sqrt(Soma);

	X1 = (-B+Raiz)/(2*A);

	X2 = (-B-Raiz)/(2*A);

	printf("X1 e = %.2f\n",X1);

	printf("X2 e = %.2f\n",X2);

	}

    return 0;
}