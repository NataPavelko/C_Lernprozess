#include <stdio.h>

int main(){
	
int j, i;
float k, z, nk, zin, dk;

printf("Geben Sie bitte Anlagebetrag: \n");
scanf("%f", &k);

printf("Geben Sie bitte Zinssatz: \n");
scanf("%f", &z);
  
  dk=k*2;	

  do{	
	zin=z*k/100;
	nk=k+zin;
  	k=nk;
	j++;
} while(k>=dk);
printf("%f %f %i",k, nk, j);	
return 0;
}