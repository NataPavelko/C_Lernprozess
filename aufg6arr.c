#include <stdio.h>
#include <stdbool.h>
#include <stdlib.h>
#include <time.h>

#define OG 1000
#define UG 1

int main(){
int arr[100], i, c;

srand(time(NULL));
 
 for(i=0;i<100;i++){
 arr[i]=rand()%(OG-UG+1)+UG;

 if(arr[i]%6==0){
 	c++;
}
else if(arr[i]%5==0){
 	arr[i]=277;	 }
 printf("%i ", arr[i]); 	
	 }
printf("\n\nTeilbar durch 6: %i", c);
 
// a
 

/*

// b
for(i=0;i<100;i++)
if(arr[i]%5==0)
 printf(i=277;	
	
*/	
	
	
return 0;
}