#include<stdio.h>

int main(){
int placa = 0, fnplaca = 0;

printf("Digite a placa do carro: \n");
scanf("%d", &placa);

fnplaca= placa % 10;

switch (fnplaca)
{
	case 1:
		case 2:
			printf("segunda-feira");
			break;
			case 3:
				case 4:
					printf("terca-feira");
					break;
					case 5:
						case 6:
							printf("Quarta-feira");
							break;
							case 7:
								case 8:
									printf("quinta-feira");
									break;
									case 9:
										case 0:
											printf("sexta-feira");
											break;
}
return 0;
}