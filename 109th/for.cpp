#include<stdio.h>
#include<stdlib.h>

main(){
	int n;
	scanf("%d",&n);
	for(int i=1;i<=n;i++){
		for(int i=1;i<=(n-1);i++){
		printf(" ");
			for(int i =1;i<=(2*n+1);i++){
			printf("*");
			}	
		}
		printf("\n");
	}
}
