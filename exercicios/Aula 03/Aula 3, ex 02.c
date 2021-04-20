#include <stdio.h>
#include <conio.h>

int main (void) {

	int c;

	for (c=0; c<=15; c++) {

		if (c) _textcolor (c); 
	printf ("cor %d\n",c); }
	system ("PAUSE");
	return 0;
}
