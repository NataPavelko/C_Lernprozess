#include <stdio.h>

int main(){
	int zahl = 0;
	int summe = 0;
	while(zahl<5){
	  zahl++;
	  summe = summe + zahl;
	}
	printf("Summe ist %i", summe);
	return 0;
	
}