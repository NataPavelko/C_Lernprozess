#include <stdio.h>
#define KW 0.735499

int main(){
float ps, erg;
printf("PS-Leistung: ");
scanf("%f", &ps);
erg=ps*KW;
printf("Ergebnis: %f", erg);

 return 0;
}
