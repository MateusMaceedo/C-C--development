#include<stdio.h>
#include<math.h>

int main(){
float peso, altura, _IMC;

printf("Digite seu Peso:\n");
scanf("%f",&peso);

printf("Digite sua altura:\n");
scanf("%f",&altura);

_IMC = peso/pow(altura,2);
printf("seu IMC e %0.2f\n", _IMC); 

    {
        if(_IMC<18.49)
        {
            printf("Voce esta Magra.\n");
        }
        else
        {
            if(_IMC>18.5 && _IMC<29.99)
            {
                printf("Peso normal.\n");
            }
            
                else
                {
                    if(_IMC>30)
                    {
                        printf("voce esta Obeso.\n");
                    }
                                         
                    }
                }
        }
        
    

    return 0;
}