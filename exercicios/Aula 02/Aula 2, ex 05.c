#include <stdio.h> 
#include <stdlib.h> 
int main () 
{
    int num1,num2,maior;

    printf("Digite o primeiro numero : ");
    scanf("%d",&num1);
    printf("Digite o segundo numero : ");
    scanf("%d",&num2);

    if (num1 > num2) 

    maior = num1;
    printf("Primeiro numero e maior que o segundo : %d\n",maior);

    if (num2 < num1)
    
	maior = num2;
    printf("\nSegundo numero e menor que o primeiro : %d\n",maior);

    system("pause");
    return 0;
}