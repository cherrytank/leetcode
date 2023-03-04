#include<stdio.h>
#include<stdlib.h>
int A[5]={23,45,5,19,30};
main(){
  int sw;
  int sop;
  for(int p=0;p<5;p++){
  	int min =A[p];
	for(int j=0;j<5;j++){
		printf("%d ",A[j]);
	}
	printf("\n");
	for(int i=p;i<5;i++){
		if(A[i]<min){
		 sw = A[p];
		 min= A[i];
		 sop=i;
		}
	}
	A[p]=min;
	A[sop]=sw;	
  }
  system("pause");
}
