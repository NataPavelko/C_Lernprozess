#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OG 6
#define UG 1
#define ANZ 20

int main(){
int zahl[ANZ]={0}, i;

srand(time(NULL));

for(i=0;i<ANZ;i++){
zahl[i]=rand()%(OG-UG+1)+UG;
printf("%i ", zahl[i]);
}

  if(zahl[ANZ]={1}){
  printf("Wurf 1: %i", i);
	i++;}

/*
  if(zahl[i]==1){
  	i++;
  printf("Wurf 1: %i", i);
}
  else if(zahl[i]==2){
  printf("\nWurf 2: %i", i);
}
  else if(zahl[i]==3);
 printf("\nWurf 3: %i", i); 
*/










 return 0;
}
