#include <stdio.h>

int main(){
  int zahl, f=1, i;
  
printf("Zahl bitte: ");
scanf("%i", &zahl);

  for(i=1;i<=zahl;i++){
  	f=f*i;

  }
  printf("Fakult\204t von %2i ist %2i\n", zahl, f);
return 0;

}