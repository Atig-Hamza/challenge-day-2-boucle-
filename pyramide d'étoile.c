#include <stdio.h>

int main() {
	int i, j, k, nb, esp ;
	
	printf ("nombres de lignes :\n");
	scanf ("%d", &nb);

	esp = nb-1 ;
	for (i=0;i<nb;++i){
		for (j=0;j<(esp-i);++j){
			printf (" ");
		}
		for (k=0;k<=(2*i);++k){
			printf ("*");
		}
		printf ("\n");
	}
}