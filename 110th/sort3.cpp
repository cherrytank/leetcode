#include<stdio.h>
#include<stdlib.h>

selection(int *A){
	for(int i=0;i<10;i++){
		int min=A[i];
		int _min=0;
		for(int j=i+1;j<10;j++){
			if(A[j]<min){
			   min=A[j];
			   _min=j;
			}
		}
		if(min<A[i]){
		A[_min]=A[i];
		A[i]=min;
		}
		for(int x=0;x<10;x++)
			printf("%3d",A[x]);
		printf("\n");
	}	
}

bubble(int *A){
	for(int i=0;i<9;i++){
		for(int j=0;j<9;j++){
			if(A[j]>A[j+1]){
				int x=A[j];
				A[j]=A[j+1];
				A[j+1]=x;
			}		
		}
		for(int x=0;x<10;x++)
			printf("%3d",A[x]);
		printf("\n");
	}	
}

insertion(int *A){
    for (int i=1; i<10;i++) {
        int key=A[i];
        int j=i-1;
        while (key<A[j]&&j>=0) {
            A[j+1]=A[j];
            j--;
        	}
        A[j+1]=key;
		for(int x=0;x<10;x++)
			printf("%3d",A[x]);
		printf("\n");
    }
}

main(){
	int A[10]={82,51,10,2,45,73,96,3,26,54};
	printf("selection:\n");
	for(int x=0;x<10;x++)
		printf("%3d",A[x]);
	printf("\n");
	
	selection(A);
	for(int x=0;x<10;x++)
		printf("%3d",A[x]);
	printf("\n");
	
	int B[10]={18,25,31,82,9,67,69,6,46,44};
	printf("bubble:\n");
	for(int x=0;x<10;x++)
		printf("%3d",B[x]);
	printf("\n");
	bubble(B);
	for(int x=0;x<10;x++)
		printf("%3d",B[x]);
	printf("\n");
	
	int C[10]={87,54,12,28,44,37,99,31,6,4};
	printf("insertion:\n");
	for(int x=0;x<10;x++)
		printf("%3d",C[x]);
	printf("\n");
	insertion(C);
	for(int x=0;x<10;x++)
		printf("%3d",C[x]);
	printf("\n");
			
	system("pause");
}  
