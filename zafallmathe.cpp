#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OG 20
#define UG 1

#define OGop 4
#define UGop 1

int main(){

int zahl1, zahl2, operat, erg, ferg;

srand(time(NULL));
 
 zahl1=rand()%(OG-UG+1)+UG;
 operat=rand()%(OGop-UGop+1)+UGop;
 zahl2=rand()%(OG-UG+1)+UG;

if(operat==1){
printf("%i + %i", zahl1, zahl2);
 erg=zahl1+zahl2;
 }

 else if(operat==2){
printf("%i - %i", zahl1, zahl2);
 erg=zahl1-zahl2;
 }
  else if(operat==3){
printf("%i * %i", zahl1, zahl2);
  erg=zahl1*zahl2;
}

 else if(operat==4){
 printf("%i % %i", zahl1, zahl2);
 erg=zahl1%zahl2;
}
 
 printf("\nIhre Ergebnis: ");
 scanf("%i", &ferg);
 
 
 if(ferg==erg){
 printf("Richtig!");
 }
 else{
 printf("Falsch!");
}
 
 return 0;
}
