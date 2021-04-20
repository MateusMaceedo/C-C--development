#include <stdio.h>
#include <math.h>

int main (void) {
	float raiz;
	int n, arredonda,d;
	printf ("digite um numero");
	scanf ("%d", &n);
	raiz =sqrt(n);
    arredonda = ceil (raiz);

  for (d=2; d<=n-1;d++)
		
		if (n%d==0); 
		if (d==arredonda) puts ("e primo!");
        
		else puts ("nao e primo");
		return 0;
}
