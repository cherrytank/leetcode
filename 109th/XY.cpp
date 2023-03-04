#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float a,b;
	scanf("%f,%f",&a,&b);
	if(a==0&&b==0){
		printf("此函數在原點上\n");
		printf("與原點距離為0\n");
		}
	else if(a==0){
		printf("此函數在Y軸上\n");
		printf("與原點距離為%f\n",b);
		}
	else if(b==0){
		printf("此函數在X軸上\n");
		printf("與原點距離為%f\n",a);
		}
	else if(a>0&&b>0){
		printf("此函數為第一象限\n");
		printf("與原點距離為%f\n",sqrt(a*a+b*b));
		}
	else if(a<0&&b>0){
		printf("此函數為第二象限\n");
		printf("與原點距離為%f\n",sqrt(a*a+b*b));
		}
	else if(a<0&&b<0){
		printf("此函數為第三象限\n");
		printf("與原點距離為%f\n",sqrt(a*a+b*b));
		}
	else if(a>0&&b<0){
		printf("此函數為第四象限\n");
		printf("與原點距離為%f\n",sqrt(a*a+b*b));
		}
	system("pause");
	
}

