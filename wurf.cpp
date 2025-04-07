#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main(){
  int i, wurf, z1=0,z2=0,z3=0,z4=0,z5=0,z6=0;
  srand(time(NULL));
  
  for(i=1;i<=10;i++){
  	wurf=rand()%6+1;
  	printf(" %i ", wurf);
    if(wurf==1){
    	z1=z1+1;
    }
    else if(wurf==2){
    	z2=z2+1;
    }
	else if(wurf==3){
    	z3=z3+1;
    }
	else if(wurf==4){
    	z4=z4+1;
    }
	else if(wurf==5){
    	z5=z5+1;
    }
    else if(wurf==6){
    	z6=z6+1;
    }
    }
    printf("\nZahl 1 %i ", z1);
    printf("\nZahl 2 %i ", z2);
    printf("\nZahl 3 %i ", z3);
    printf("\nZahl 4 %i ", z4);
    printf("\nZahl 5 %i ", z5);
    printf("\nZahl 6 %i ", z6);


 
 return 0;
}
