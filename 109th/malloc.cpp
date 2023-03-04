#include<stdio.h>
#include<stdlib.h>

main(){
	int r,c;
	scanf("%d%d",&r,&c);
	int** a=(int**)malloc(sizeof(int*)*r);
	for(int i=0;i<r;i++)
		a[i]=(int*)malloc(sizeof(int)*c);
	for(int i=0;i<r;i++){
		for(int j=0;j<c;j++){
			a[i][j]=i*c+j+1;
			printf("%2d ",a[i][j]);
		}
		printf("\n");
	}
system("pause");	
}

