#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OG 100
#define UG 1

int main(){

int zahl[50], gsumme=0, ungsumme=0, allsumme=0, i;

srand(time(NULL));

for(i=0; i<50; i++){
zahl[i]=rand()%(OG-UG+1)+UG;
 printf("%i ", zahl[i]);
 allsumme=allsumme+zahl[i];


 if(zahl[i]%2==0)
 gsumme=gsumme+zahl[i];


 else 
 ungsumme=ungsumme+zahl[i];
}

printf("\n Summe aller geraden Werte: %i ", gsumme); 
printf("\n Summe aller ungeraden Werte: %i ", ungsumme);

 printf("\n Summe aller Werte: %i ", allsumme); 
 
 return 0;
}
