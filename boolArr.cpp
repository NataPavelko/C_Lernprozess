#include <stdio.h>

int main(){
int arr[5]={25,9,14,25,7}, anz=5, i=0, hilf=0;
bool tausch=true;

printf("Voher: ");
 for(i=0;i<5;i++)
 printf("%i ", arr[i]);

do{
 tausch=false;
 anz=anz-1;
  for(i=0;i<anz;i++)
  if(arr[i]>arr[i+1]){
  hilf=arr[i];
  arr[i]=arr[i+1];
  arr[i+1]=hilf;
  tausch=true;
}
}
while(tausch==true);

printf("Nacher:");
for(i=0;i<5;i++)
printf("%i ", arr[i]);

 return 0;
}
