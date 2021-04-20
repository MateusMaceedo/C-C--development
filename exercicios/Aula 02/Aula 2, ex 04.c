#include <stdio.h>
int main ()
{
float p1,p2, media; //Variavel

	printf("Nota da Prova 1:");
    scanf("%f",&p1);

	printf("Nota da prova 2:");
	scanf("%f",&p2);

	media = (p1+p2)/2; //divisão
	printf("Media final = %.1f", media);
	
	if (media >=6) puts(" Aprovado");

	else puts("\t Reprovado");
	return 0;
}