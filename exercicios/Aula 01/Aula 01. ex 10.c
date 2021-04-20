#include <stdio.h>
#include <math.h>

int main()
{

   float xp,yp,xq,yq;
   float dist;

	printf("\n Informe a posicao de ( xp ): ");
	scanf("%f",&xp);

    printf("\n Informe a posicao de ( yp ): ");
	scanf("%f",&yp);

    printf("\n Informe a posicao de ( xq ): ");
	scanf("%f",&xq);

    printf("\n Informe a posicao de ( yq ): ");
	scanf("%f",&yq);

	dist = sqrt(pow((float)(xp - (float)yp),2) + pow((float)(xq - (float)yq),2));

    printf("A distancia entre os pontos e: %.2f\n\n", dist);
	

	return 0;
}