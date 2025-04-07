#include <stdio.h>

int main(){
  float zuZahlen, gegeben, zurueck, rest, ng;
  int anz=0, i;
  
  
  printf("Zu zahlen: \n", zuZahlen);
  scanf("%f", &zuZahlen);
  
  printf("Gegeben  : \n", gegeben);
  scanf("%f", &gegeben);
  
  
  
  
  while(gegeben<zuZahlen){
	
  	printf("Sie haben zu wenig Geld ausgegeben! Neue Summe: ", gegeben);
    scanf("%2f", &ng);
    gegeben=gegeben+ng;
   
}

zurueck=gegeben-zuZahlen;
  
  while(zurueck>=5){
  	zurueck=zurueck-5;
  	anz++;
  }
  if(anz>0){
	  printf("%i x 5,00, ", anz);
	  printf("Rest: %.2f\n", zurueck);
      anz=0;
  }
  
  while(zurueck>=2){
  	zurueck=zurueck-2;
  	anz++;
  }
  if(anz>0){
	  printf("%i x 2,00, ", anz);
  	  printf("Rest: %.2f\n", zurueck); 
      anz=0;
  }
  // 1-Euromünze
  while(zurueck>=1){
  	zurueck=zurueck-1;
  	anz++;
  }
  if(anz>0){
  	 printf("%i x 1,00, ", anz);
  	 printf("Rest: %.2f\n", zurueck); 
     anz=0;
  }
     
  // 50-Centmünze
  while(zurueck>=0.5){
  	zurueck=zurueck-0.5;
  	anz++;
  }
  if(anz>0){
  	 printf("%i x 0,50, ", anz);
  	 printf("Rest: %.2f\n", zurueck); 
     anz=0;
 /* 
  while(zurueck<0){
  	rest=zuZahlen-gegeben;
	printf("Sie haben zu wenig Geld ausgegeben! geben Sie bitte noch: %.2f Euro", rest);
	
  	printf("Ihre Summe:", gegeben);
   scanf("%f", &gegeben);
    i++;}
  */
  }
 return 0;
 

  }

  /*
  while(zurueck>=5){
  	zurueck=zurueck-5;
  	anz++;
  }
  if(anz>0){
	  printf("%i x 5,00, ", anz);
	  printf("Rest: %.2f\n", zurueck);
      anz=0;
  }
  
  while(zurueck>=2){
  	zurueck=zurueck-2;
  	anz++;
  }
  if(anz>0){
	  printf("%i x 2,00, ", anz);
  	  printf("Rest: %.2f\n", zurueck); 
      anz=0;
  }
  // 1-Euromünze
  while(zurueck>=1){
  	zurueck=zurueck-1;
  	anz++;
  }
  if(anz>0){
  	 printf("%i x 1,00, ", anz);
  	 printf("Rest: %.2f\n", zurueck); 
     anz=0;
  }
     
  // 50-Centmünze
  while(zurueck>=0.5){
  	zurueck=zurueck-0.5;
  	anz++;
  }
  if(anz>0){
  	 printf("%i x 0,50, ", anz);
  	 printf("Rest: %.2f\n", zurueck); 
     anz=0;
  }
*/

