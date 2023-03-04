#include <stdio.h>
#include <stdlib.h>

main(){
	int n;
	scanf("%d",&n);
	int i = 1;
	int k = 1;
	int p = n;
	while(i<=n){
		int j=1;
		int x=2;
		while(x<=p){
			printf(" ");
			x++;
		}
		while(j<=k){
			printf("*");
			j++;
		}
	printf("\n");
	i++;
	k=k+2;
	p--;
	}
	system("pause");
}
