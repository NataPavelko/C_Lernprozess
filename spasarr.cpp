#include <stdio.h>

int main(){

int werte[8]={0};
int k=1, z=3;

while(k<=7){
werte[k]=(k+2)*(z+1);
z++;
k++;
}

for(k=1;k<8;k++)
printf("%i ", werte[k]);

printf("________");
 
k=7;
while(k>=1){
  werte[k]=werte[8-k]-k;
  printf("%i ", werte[k]); 
  k--;
}

 return 0;
}
