#include<stdio.h>
#include<stdlib.h>
#include<math.h>
float inproduct(float a1,float b1,float c1,float a2,float b2,float c2);
void outproduct(float a1,float b1,float c1,float a2,float b2,float c2);
main(){
       float a1,b1,c1,a2,b2,c2;
       scanf("%f%f%f",&a1,&b1,&c1);
       scanf("%f%f%f",&a2,&b2,&c2);
       printf("內積為%f\n",inproduct(a1,b1,c1,a2,b2,c2));
       outproduct(a1,b1,c1,a2,b2,c2);
       }
float inproduct(float a1,float b1,float c1,float a2,float b2,float c2){
      float k = a1*a2+b1*b2+c1*c2;
      return k;
      }
void outproduct(float a1,float b1,float c1,float a2,float b2,float c2){
     float  j = b1*c2-b2*c1;
     float  q = c1*a2-c2*a1;
     float  k = a1*c2-a2*b1;
     printf("外積為%f,%f,%f",j,q,k);
     } 
         
 
