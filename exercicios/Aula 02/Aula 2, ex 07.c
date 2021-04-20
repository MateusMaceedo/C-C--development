#include <stdio.h>
#include <conio.h>
int main (void)
{
float p1,p2, media; 
float faltas;

	printf("\n Nota da Prova 1:");
    scanf("%f",&p1);
		
	printf("\n Nota da prova 2:");
	scanf("%f",&p2);

    printf("\n Numero de faltas: ");
	scanf("%f",&faltas);

	media = (p1 + p2)/ 2; 

	if(faltas <= 5 && media >= 4){
		_textcolor(9);
		printf("\n Aprovado \n\n ");
	}
	else if(faltas > 5 && media >= 4){
		_textcolor(6);
		printf("\n Recuperacao \n\n ");
	}
	else if(faltas <= 5 && media <= 4){
		_textcolor(6);
		printf("\n Recuperacao \n\n");
	}
	else if(faltas > 5 && media < 4){
		_textcolor(12);
		printf("\n Reprovado \n\n ");
	}

    /*if (faltas >= 5)

	media = (p1+p2)/2; //divisão
	printf("Media final = %.1f", media);
	
	if (media >=6 && faltas <=5)  puts(" Aprovado");

	else puts("\t Reprovado");

	if( media < 6 && faltas > 5 ) { _textcolor(9); puts("Aprovado");}
      else    { _textcolor(12); puts("Reprovado");}*/
	return 0;
}