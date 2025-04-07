#include <stdio.h>

int main(){
	
int j, i;
float k, z, nk, zin;

printf("Geben Sie bitte Anlagebetrag: \n");
scanf("%f", &k);

printf("Geben Sie bitte Zinssatz: \n");
scanf("%f", &z);
  	
printf("Geben Sie bitte Stehzeit: \n");
scanf("%i", &j);
printf("Jahr  Kapital  Zinsen  Neues Kapital");

  for(i=1;i<=j;i++){	
	zin=z*k/100;
	nk=k+zin;
  	
     printf("\n %3i %10.2f ",i, k);
  	 printf("%10.2f %10.2f\n", zin, nk);
 k=nk;
}
return 0;
}
