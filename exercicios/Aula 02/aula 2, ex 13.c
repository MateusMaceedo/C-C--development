#include<stdio.h>
#include<stdlib.h>

int main(){
int placa = 0, fnplaca = 0;

printf("Digite a placa do carro: \n");
scanf("%d", &placa);

fnplaca= placa % 10;

if (fnplaca == 1 || fnplaca ==2){
	printf("Segunda-Feira");
}
else if (fnplaca == 3 || fnplaca ==4){
	printf("Terca-Feira");
}
else if (fnplaca == 5 || fnplaca ==6){
	printf("Quarta-Feira");
}
else if(fnplaca == 7 || fnplaca ==8){
	printf("Quinta-Feira");
}
else if(fnplaca == 9 || fnplaca==0){
	printf("Sexta-Feira");
}
return 0;
}