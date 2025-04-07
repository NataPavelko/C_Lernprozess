#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OG 1000
#define UG 10000
#define PRODUKTE 100
#define FILIALEN 50

int main(){

float ums[PRODUKTE][FILIALEN], gesamt=0, umswin=0, pmin,  pmax;
int i, k, nummin, nummax, filnum1, filnum2;

srand(time(NULL));


for(i=0;i<PRODUKTE;i++){
  for(k=0;k<FILIALEN;k++){
  	ums[i][k]=rand()%((OG-UG+1)+UG)/100.0;
  	printf("%4.2f |", ums[i][k]);
    }
printf("\n");
}



gesamt=0;
for(i=0;i<PRODUKTE;i++){
  for(k=0;k<FILIALEN;k++){
  gesamt=gesamt+ums[i][k];
  }
}
printf("\nGesamtumsatz: %4.2f", gesamt);

umswin=0;
  for(k=0;k<FILIALEN;k++){
  umswin=umswin+ums[9][k];
  }
printf("\nWinuxumsatz: %4.2f", umswin);

umswin=0;
k=22;
for(i=0;i<PRODUKTE;i++){
  umswin=umswin+ums[i][k];
  }
printf("\nFilliale 23: %4.2f", umswin);


  for(k=0;k<FILIALEN;k++){
  	umswin=0;
  	for(i=0;i<PRODUKTE;i++){
  umswin=umswin+ums[i][k];
	}
	
	
	if(umswin>500){
	filnum1=k;
	}
	
	
printf("\nProduktumsatz pro Filliale %i: %4.2f", k, umswin); 
}
filnum2=filnum1;
printf("\nErfolgreiche Filialle:");
printf("\n%i", filnum2);
	 


 for(i=0;i<PRODUKTE;i++){
  	umswin=0;
  	for(k=0;k<FILIALEN;k++){
  umswin=umswin+ums[i][k];
  
	}
  if(i==0){
	pmin=pmax=umswin;
	nummax=nummin=i;
	}
	if(umswin>pmax){
	 pmax=umswin;
	 nummax=i;
	 }
    else if(umswin<pmin){
	 pmin=umswin;
	 nummin=i;
	 }
  printf("\nProduktumsatz pro Produkt %i: %4.2f", i, umswin);
}
 printf("\nProdukt mit max Umsatz: %i ---- %4.2f", nummax, pmax);
 printf("\nProdukt mit min Umsatz: %i ---- %4.2f", nummin, pmin);  
 return 0;
}
