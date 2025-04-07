#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#include <time.h>
#define OG 40
#define UG 1




int main(){
  
  int i=0, mini=0, maxi=0, zahl=0;
  srand(time(NULL));
  zahl=rand()%(OG-UG+1)+UG;
  printf("%i ", zahl);
  mini=maxi=zahl;
  
  for(i=2;i<=5;i++){
  zahl=rand()%(OG-UG+1)+UG;
  printf("%i ", zahl);
  
  if(zahl>maxi){
  maxi=zahl;
  }
  
  else if(zahl<mini){
  mini=zahl;
  }
  }
printf("Minimum: %i ", mini);
printf("Maximum: %i ", maxi);
 return 0;
}
