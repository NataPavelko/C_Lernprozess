#include <stdio.h>
#include <math.h>

int main(){
   int zahl, quadrat, kubik;
   
   for(zahl=1;zahl<=10;zahl++){
   quadrat=zahl*zahl;
   kubik=pow(zahl,3);
   //quadrat=pow(zahl,2);
   printf("%i * %i = %i\t\t", zahl, zahl, quadrat);
   printf("%i * %i *%i = %i\n", zahl, zahl, zahl, kubik);
   }
   return 0;
}