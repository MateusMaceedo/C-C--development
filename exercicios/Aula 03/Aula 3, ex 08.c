#include <stdio.h>
#include <conio.h>
#include <ctype.h>
#include <stdlib.h>

int main (void) {

	int col = 40, lin = 12, x;

	while(1)  {
		_gotoxy(col,lin);
		_putch(219);
     { _textcolor (x); }
			switch ( toupper(_getch() ) ) {
			case 'N' : if ( lin > 1) lin--; break;
            case 'S' : if (lin <24) lin++; break;
            case 'L' : if (col < 80) col++; break;
            case 'O' : if (col > 1) col--; break;
            case 'f' : exit (1);
			case 'X' : if (lin >= 1)x++; {_textcolor (x);}
			case'R' : if (col >= 1)x++; {_textcolor (x);}
	
		    }
	}
	return 0;
}
