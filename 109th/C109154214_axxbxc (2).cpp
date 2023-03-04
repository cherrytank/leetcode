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
	 printf("此方程式無解\n");
     }
    else 
          if(D==0){ 
          printf("此方程式重根\n");
	      printf("%dx^2+%dx+%d\n",a,b,c);
	      printf("X answer is\n");
	      printf("%f,%f\n",((-1*b))/(2*a),((-1*b))/(2*a));
	      } 
          else { 
          printf("此方程式為相異解\n");
          printf("%dx^2+%dx+%d\n",a,b,c);
	      printf("X answer is\n");
	      printf("%f,%f\n",(-b+sqrt(b*b-4*a*c))/(2*a),(-b-sqrt(b*b-4*a*c))/(2*a));
          }
        
	system("pause");
}
