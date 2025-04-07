#include <stdio.h>
#include <math.h>



int main(){
int ix=42, i;
do{
printf("Geben Sie bitte die Zahl (5-50): ");
scanf("%i", &ix);

if(ix<5 || ix>50){
printf("Fehler!");
}
else {
printf("Ihre Zahl in hexadecimal = %x\n",ix);
i++;}
} while(ix>=5 || ix<=50);

 return 0;
}
