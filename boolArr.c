#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define OG 1000
#define UG 1

int main(){
int arr[100], anz=100, i=0, hilf=0;
bool tausch=true;
srand(time(NULL));
printf("Voher: ");
 for(i=0;i<100;i++){
 arr[i]=rand()%(OG-UG+1)+UG;
 printf("%i ", arr[i]);
}
do{
 tausch=false;
 anz=anz-1;
  for(i=0;i<anz;i++)
  if(arr[i]>arr[i+1]){
  hilf=arr[i];
  arr[i]=arr[i+1];
  arr[i+1]=hilf;
  tausch=true;
}
}
while(tausch==true);

printf("\nNacher:");
for(i=0;i<100;i++)
printf("%i ", arr[i]);

 return 0;
}
