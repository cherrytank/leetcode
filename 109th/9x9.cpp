#include<stdio.h>
#include<stdlib.h>

main(){
       for(int a=1;a<=9;a++){
         for(int b=1;b<=3;b++){
          printf("%d*%d=%2d ",b,a,a*b);
          }
          printf("\n");
         }
        printf("\n");
       for(int a=1;a<=9;a++){
         for(int b=4;b<=6;b++){
          printf("%d*%d=%2d ",b,a,a*b);
          }
          printf("\n");
          } 
        printf("\n");
       for(int a=1;a<=9;a++){
         for(int b=7;b<=9;b++){
          printf("%d*%d=%2d ",b,a,a*b);
          }
          printf("\n");                           
         }
        printf("\n");
       system("pause");
}
