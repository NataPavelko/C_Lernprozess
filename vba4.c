#include <stdio.h>


int noten(int p){	
int n;
printf("Ihre Punktzeil:");
scanf("%i", &p);
if(p<=100 && p>=92)
n=1;
else if(p<=91 && p>=81)
n=2;
else if(p<=80 && p>=67)
n=3;
else if(p<=66 && p>=50)
n=4;
else if(p<=49 && p>=30)
n=5;
else
n=6;
printf("Note %i", n);
}

int main(){
int punkt;
noten(punkt);
 return 0;
}
