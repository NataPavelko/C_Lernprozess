#include <stdio.h>

int main(){

int personen, flaeche, i, premie;

printf("Anzahl der Personen:");
scanf("%i", &personen);
printf("Quadratmeteranzahl:");
scanf("%i", &flaeche);

 if(personen==1||personen==2)
 premie=10 + flaeche / 2;
  else if(personen==3)
 premie=15 + flaeche;
  else if(personen==4)
 premie=15 + 1,5 * flaeche;
 else
 premie=25 + 2 * flaeche;
 
 printf("Ihre Premie: %i", premie);
 return 0;
}
