#include<stdio.h>
#include<stdlib.h>

main(){
	float n;
	float* a;
	scanf("%f", &n);
	a =(float*) malloc(sizeof(float)*n);
	for(int i=0 ; i<n ; i++){
      a[i] = i;
      printf("a[%x]=%f\n",&a[i],a[i]);
   }	
}

