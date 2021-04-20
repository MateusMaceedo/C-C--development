#include <stdio.h>
int main(){
    float rodados,litros;
    float mediakm;
   
    printf("\nInforme quantos quilometros rodados: ");
    scanf("%f", &rodados);
    
	printf("\nInforme a quantidade de combustivel: ");
    scanf("%f", &litros);
     
    mediakm=rodados/litros;
    printf("\nSua media de consumo e de %.2f KM por litro de combustivel.\n\n", mediakm);
    
    return 0;
}