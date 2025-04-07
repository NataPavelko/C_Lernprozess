#include <stdio.h>

int main(){
	int anzahl=1, i, summe=0, w;
	for(i=1; i<=8; i++){
	summe=summe+anzahl;
	anzahl=anzahl*2;
	w=summe*0.025;
	}
printf("Anzahl: %i\n", summe);
printf("W: %i Gramm", w);
 return 0;
}
