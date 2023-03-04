#include<stdio.h>
#include<stdlib.h>

float pow(float,float);
float fact(float);
main(){
       
       float sum=0;
       for(float i=1;i<=10;i++){
       printf("%f+%f/%f\n",sum,fact(i),pow(i,2));
       sum+=fact(i)/pow(i,2);    
        }
       printf("%f\n",sum);
       
       system("pause");
}
       
float pow(float i,float x){
      float pow =1;
      for(int j=1;j<=i;j++){
          pow*=x;
          }
      return pow;
     }
     
float fact(float i){
      
      float p =1;
      float fact=0;
       for(int j = 1;j<=i;j++){
               p*=j;
               }
       fact=p;
       return fact;
      } 
