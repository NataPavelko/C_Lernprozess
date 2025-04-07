
#include <stdio.h>
#include <stdlib.h>
#include <time.h>

#define OG 1000
#define UG 1


int main(){
int arr[100];
int i=0, k=0, hilf=0;

srand(time(NULL));
printf("Voher:");
 for(i=0;i<100;i++){
 arr[i]=rand()%(OG-UG+1)+UG;
 printf("%i ",arr[i]);
}
 
for(i=0;i<100;i++){
  for(k=i+1;k<100;k++)
  if(arr[i]>arr[k]){
  hilf=arr[i];
  arr[i]=arr[k];
  arr[k]=hilf;
  }

}
 printf("\nNachher:");
 for(i=0;i<100;i++)
 printf("%i ", arr[i]);
 
 return 0;
}
