#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <math.h>

#define OG 100
#define UG 0

int main(){

int arrNoten[50]={0}, i, min, max, b;
float durch=0;

srand(time(NULL));

for(i=0; i<50; i++){
arrNoten[i]=rand()%(OG-UG+1)+UG;
durch=durch+arrNoten[i];
}

min=max=arrNoten[0];

for(i=0; i<50; i++){

 if(arrNoten[i]<min)
 	min=arrNoten[i];

else if(arrNoten[i]>max)
 	max=arrNoten[i];
}
 
 for(i=0;i<50;i++){
 if(arrNoten[i]>=50)
 printf("%i: %3i Bestanden\n", i, arrNoten[i]);
 else 
 printf("%i: %3i Nicht bestanden\n", i, arrNoten[i]);}
 
  	//printf("%i: %3i\n", b, arrNoten[b]);
  	
durch=durch/50;
printf("\nBeste Note: %i \n", max);
printf("Schlehteste Note: %i \n", min);
printf("Durchschnit: %.2f \n", durch);
 return 0;
}
