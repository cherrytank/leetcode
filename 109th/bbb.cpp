#include<stdio.h>
#include<stdlib.h>
int countprime(int a,int b);
main(){
	int a,b;
	scanf("%d%d",&a,&b);
	printf("%d到%d有%d個質數",a,b,countprime(a,b));
}
int countprime(int a,int b){
	int c=0;
	for(int i=a;i<=b;i++){
		int d=0;
		for(int j=1;j<=i;j++){
			if(i%j==0)
			d++;
		}
		if(d==2)
		c++;
	}
	return c;
}
