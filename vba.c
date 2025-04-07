#include <stdio.h>

int main(){

int a, b, erg=0, rest=0, i;

printf("Erste Zahl:");
scanf("%i", &a);

printf("Zweite Zahl:");
scanf("%i", &b);

while(a>=b){
a=a-b;
erg++;
rest=a;
}

printf("Teilbar %i Rest %i", erg, rest);
 return 0;
}
