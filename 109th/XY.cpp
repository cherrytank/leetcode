#include <stdio.h>
#include <stdlib.h>
#include <math.h>

main(){
	float a,b;
	scanf("%f,%f",&a,&b);
	if(a==0&&b==0){
		printf("����Ʀb���I�W\n");
		printf("�P���I�Z����0\n");
		}
	else if(a==0){
		printf("����ƦbY�b�W\n");
		printf("�P���I�Z����%f\n",b);
		}
	else if(b==0){
		printf("����ƦbX�b�W\n");
		printf("�P���I�Z����%f\n",a);
		}
	else if(a>0&&b>0){
		printf("����Ƭ��Ĥ@�H��\n");
		printf("�P���I�Z����%f\n",sqrt(a*a+b*b));
		}
	else if(a<0&&b>0){
		printf("����Ƭ��ĤG�H��\n");
		printf("�P���I�Z����%f\n",sqrt(a*a+b*b));
		}
	else if(a<0&&b<0){
		printf("����Ƭ��ĤT�H��\n");
		printf("�P���I�Z����%f\n",sqrt(a*a+b*b));
		}
	else if(a>0&&b<0){
		printf("����Ƭ��ĥ|�H��\n");
		printf("�P���I�Z����%f\n",sqrt(a*a+b*b));
		}
	system("pause");
	
}

