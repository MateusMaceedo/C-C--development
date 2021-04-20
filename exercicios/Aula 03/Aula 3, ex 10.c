#include <stdio.h>
#include <conio.h>
#include <time.h>

int main (void) {
	int x = 1, y = 1, dx = 1, dy = 1;
	do {
		{ _textcolor (x); }
		_gotoxy (x,y);
		printf ("O\b");
		_sleep (0);
		printf (".");
		if (x==5 || x==21) dx = -dx;
		if (y== 3|| y==31) dy = +dy;
		x += dx;
		y += dy;
	
	} while (!_kbhit() );
	return 0;
}
