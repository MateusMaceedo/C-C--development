#include <stdio.h>
int main(void)
{
int dia,mes,ano,passo1,passo2a,passo2c,passo3,passo2b;
char barra1 ,barra2;
printf("\nDigite a data de aniversario:\n");
scanf("%d %c %d %c %d", &dia, &barra1, &mes, &barra2, &ano);
passo1 = dia*100+mes+ano;
passo2a = passo1/100;
passo2b = passo1%100;
passo2c = passo2a+passo2b;
passo3 = passo2c%5;
switch(passo3)
{
	case 0: printf("timido\n"); break;
	case 1: printf("sonhador\n "); break;
    case 2: printf("Paquerador\n "); break;
	case 3: printf("Atraente\n "); break;
	case 4: printf("Irresistivel\n "); break;  
}
	return 0;	
}