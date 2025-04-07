 #include <stdio.h>

int main(){
  int zahl=0, i=0;
  
  printf("Zahl bitte (Ende bei -1) %i ");
  scanf("%i", &zahl);
  
  while(zahl>0){
   if(zahl%2==0){
   i++;
   }
   printf("Zahl bitte (Ende bei -1) ");
   scanf("%i", &zahl);
  }
  
  printf("Es sind %i gerade Zahlen.", i);
  
 return 0;
}
