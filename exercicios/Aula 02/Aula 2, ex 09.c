	#include <stdio.h>
#include <stdlib.h>
int main(void) 
{
float renda=0, calculo_IMP=0, resultado=0, aliq=0;
int i,x,z;


printf("DIGITE A RENDA MENSAL BRUTA: ");
scanf("%f" , &renda);

calculo_IMP=(renda);
if(calculo_IMP<=1903.98)
{
printf("Isento de imposto de renda");
}
if(calculo_IMP>=1903.99 && calculo_IMP<=2826.65)
{
resultado=calculo_IMP*0.075; 
printf("Isento de imposto de renda");
}
if(calculo_IMP>=2826.66 && calculo_IMP<=3751.05)
{
resultado=calculo_IMP*0.15;
}
if(calculo_IMP>=3751.06 && calculo_IMP<=4664.68)
{
resultado=calculo_IMP*0.225;
}
if (calculo_IMP>=4664.69)
{resultado=calculo_IMP*0.275;
}
printf("O salario liquido sera de: %.2f\n\n",renda-resultado);

return 0;
}