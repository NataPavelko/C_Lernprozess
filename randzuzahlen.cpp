#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OG 10000
#define UG 1

int main(){
  float zuZahlen;	
  double gegeben=0, zurueck, mehr;
  int anz=0, zur, fuenfer=50000, zweier=20000, einser=10000, i;
 
 srand(time(NULL));
 
 
 zuZahlen=rand()%(OG-UG+1)+UG;
 zuZahlen=zuZahlen/100;
 printf(" %.2f ", zuZahlen);

 
 return 0;
}
