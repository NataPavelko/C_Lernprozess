#include <stdio.h>

int main(){
  int i, j=0, n=0, e=0;
  char x;
  
  for(int i=1; i<=8; i++){
  printf(" Bitte wahlen Sie mit j,n,e: ");
  scanf(" %c", &x);
  
  switch(x){
    case 'j': j++; break;
    case 'n': n++; break;
    default : e++; break;
  }
}
printf("Ja %d\n", j);
printf("Nein %d\n", n);
printf("Enthalten %d\n", e);
 return 0;
}