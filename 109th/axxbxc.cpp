#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int a,b,c;

main(){
	printf("enter three numbers in three times\n");
	scanf("%d",&a);
	scanf("%d",&b);
	scanf("%d",&c);
	printf("%dx^2+%dx+%d\n",a,b,c);
	printf("X answer is\n");
	printf("%f,%f\n",((-1*b)+sqrt(b*b-4*a*c))/(2*a),((-1*b)-sqrt(b*b-4*a*c))/(2*a));
	system("pause");
}
