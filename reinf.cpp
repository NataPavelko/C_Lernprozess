#include <stdio.h>

int main(){
int werte[4]={13,-22,82,17}, ergebnis[4], i;



for(i=0;i<4;i++){
printf("Werte: %i\n", werte[i]);
}
for(i=3;i>=0;i--){
ergebnis[i]=werte[i];
printf("Ergebnis: %i\n", ergebnis[i]);
}

 return 0;
}