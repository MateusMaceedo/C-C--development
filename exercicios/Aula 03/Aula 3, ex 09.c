#include <stdio.h>
#include <conio.h>

void main(void)
{
	printf("TESTE...%c", '\n');
	while (!_kbhit())
	{
	}
	printf("Tecla precionada! At� logo!%c", '\n');
	
	return;
}
