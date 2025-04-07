#include <stdio.h>

int main(){
int werte[4]={13,-4,82,17}, i, doppelt[4];


for(i=0;i<4;i++){
printf("Werte: %i\n", werte[i]);
}

for(i=0;i<4;i++){
doppelt[i]=werte[i]*2;
printf("Doppelte Werte: %i\n", doppelt[i]);
}
 return 0;
}
