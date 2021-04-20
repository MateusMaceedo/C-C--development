#include <conio.h>
int main ()
{
float p1,p2, media; 
float faltas;

	printf("Nota da Prova 1:");
    scanf("%f",&p1);
		
	printf("Nota da prova 2:");
	scanf("%f",&p2);

    printf("Numero de faltas: ");
	scanf("%f",&faltas);

    if (faltas >= 5) puts ( "Reprovado");

	media = (p1+p2)/2; //divisão
	printf("Media final = %.1f", media);
	
	if (media >=6) puts(" Aprovado");

	else puts("\t Reprovado");

	if( media >=6 ) { _textcolor(9); puts("Aprovado");}
      else    { _textcolor(12); puts("Reprovado");}
	return 0;
}