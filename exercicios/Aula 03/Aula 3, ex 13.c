#include <stdio.h>
#include <stdlib.h>

int main (void) {

	int operacao, saque;

	float deposito;

	    printf ("\n [1] para saldo");
		printf ("\n [2] para saque");
		printf ("\n [3] para deposito");
		printf ("\n [4] para sair");

		printf ("\n\n escolha a operacao desejada: ");
		scanf ("%d", &operacao);

		switch (operacao) {

		case 1:
		printf ("\n seu saldo e: 1000\n\n");
		break;

		case 2:
		printf ("quanto deseja sacar?\n\n");
		scanf ("%d", &saque);
		printf ("%d", saque);
		if (saque >=1001)
		printf ("\n\noperacao invalida");
        if (saque <=1000)
		printf ("\n\noperacao efetuada com sucesso");
		break;

		case 3:
		printf ("\n entre com o valor de deposito");
		scanf ("%f", &deposito);
		printf ("\n deposito efetuado com sucesso\n\n");
		printf ("\no valor depositado e %.2f\n\n");
		break;

		case 4:
		printf ("deseja mesmo sair ?\n\n");
   }
	

		return 0;
	}
