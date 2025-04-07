#include <stdio.h>
#include <stdlib.h>  //für rand()
#include <time.h>    //für Systemzeit

int main(){
  int i, zahl;
  srand(time(NULL));   //start random
  for(i=1;i<=50;i++){
  zahl=rand()%49+1;
  printf("%i ", zahl);
}
 return 0;
}
