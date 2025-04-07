#include <stdio.h>
#define ZAHL 13
int main(){
	
int liste[10]={2,-12,33,4,13,-4,82,17,56,19}, i;

for(i=0;i<10;i++){
  
   if(liste[i]==ZAHL){
  printf(" %i ", i);
  }
   else if(liste[i]!=ZAHL) {
 printf("-1");
 }
  
  
/* 
 else if(liste[i]!=ZAHL) {
 printf("-1");
 }
*/ 
}

 return 0;
}
