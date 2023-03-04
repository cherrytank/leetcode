#include<stdio.h>
#include<stdlib.h>
#include<math.h>
main(){
	float sum=0;
	float w=0.0001;
	for(float x=0;x<=1;x=x+w){
		float h=sqrt(1-x*x);
		sum=sum+h*w;
		printf("%f\n",sum);
	}
	float pi = sum*4;
	printf("%f\n",pi);
	system("pause");
}
