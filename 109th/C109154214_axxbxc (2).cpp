#include <stdio.h>
#include <stdlib.h>
#include <math.h>
main(){
    float a,b,c;   
	printf("enter three numbers in three times\n");
	scanf("%f",&a);
	scanf("%f",&b);
	scanf("%f",&c);
	float D = b*b-4*a*c;
	if(D<0){
	 printf("����{���L��\n");
     }
    else 
          if(D==0){ 
          printf("����{������\n");
	      printf("%dx^2+%dx+%d\n",a,b,c);
	      printf("X answer is\n");
	      printf("%f,%f\n",((-1*b))/(2*a),((-1*b))/(2*a));
	      } 
          else { 
          printf("����{�����۲���\n");
          printf("%dx^2+%dx+%d\n",a,b,c);
	      printf("X answer is\n");
	      printf("%f,%f\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
          }
        
	system("pause");
}
