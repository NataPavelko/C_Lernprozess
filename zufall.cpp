#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#define UG 1
#define OG 20

int main(){
  int zahl=1, zufall, i; 
  
  srand(time(NULL));
  zufall=rand()%(OG-UG+1)+UG;
  printf("%i", zufall);
  
  for(i=1;zahl!=zufall&&;i++){
  printf(" Geben Sie die Zahl ");
  scanf("%i", &zahl);
  
   if(zahl<zufall){
   printf("Ihre Zahl ist kleiner ");
}
   else if(zahl>zufall){
   printf("Ihre Zahl ist groser ");
   }
  else if(zahl==zufall){
   printf("Rihtige Zahl! ");
  }
 
}
 return 0;


}