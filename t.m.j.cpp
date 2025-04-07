#include <stdio.h>

int main(){

int t, m, j, i;

printf("Geben Sie bitte Jahr ");
scanf("%i", &j);

while(j<1800 || j>2200){
printf("Falsches Datum!");
printf("Geben Sie bitte Jahr nochmal (1800-2200) ");
scanf("%i", &j);
}

printf("Geben Sie bitte Monat ");
scanf("%i", &m);

while(m<1 || m>12){
printf("Falsches Datum!");
printf("Geben Sie bitte Monat nochmal (1-12)");
scanf("%i", &m);
}

  printf("Geben Sie bitte Tag ");
  scanf("%i", &t);
  
  while(t<1 || t>31){
  printf("Falsches Datum!");  
}

 printf("Plausibles Datum");  

return 0;

}








//if(m==4 || m==6 || m==9  || m==11){
//printf("Dieser Monat hat nur 30 Tagen");
//scanf("%i", &m);


//if(m==4 || m==6 || m==9  || m==11){
	//t/=31;}
//printf(" Dieser Monat hat nur 30 Tage  ");
  


 

