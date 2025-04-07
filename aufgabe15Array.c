#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define OG 100
#define UG 1


int main(){
	
int arr[25], i=0, zahl, schalter=-1, versuch=3;
srand(time(NULL));

for(i=0;i<25;i++){
arr[i]=rand()%(OG-UG+1)+UG;
printf("%i ", arr[i]);
}
do{
printf("\n\nGeben Sie bitte Ihre Zahl: ", zahl);
scanf("%i", &zahl);

for(i=0;i<25;i++){
  if(zahl==arr[i]){
  printf("Gefunden die Zahl: %i", zahl);
  schalter = 0; 
	}
}
if(schalter == -1){
printf("Nicht gefunden die Zahl: %i", zahl);
}
versuch--;
i++;
}while(schalter == -1 && versuch>0);

 return 0;
}
