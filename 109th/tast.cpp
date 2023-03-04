#include<stdio.h>
#include<stdlib.h>
#include<math.h>


main(){
       float a,b,c;
       scanf("%f%f%f",&a,&b,&c);
       float d = b*b-4*a*c;
       if(d>0)
       printf("與X軸焦點為(%f,0),(%f,0)\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
       if(d==0)
       printf("與X軸焦點為%f\n",(-b+sqrt(d))/(2*a));
       if(d<0)
       printf("與X軸沒有焦點\n");
       printf("與Y軸焦點為(0,%f)\n",c);
       if(d>0 && c!=0)
       printf("與X軸與Y軸形成的三角形面積為%f\n",sqrt(d)*sqrt(c*c)/(2*a));
       else
       printf("與X軸與Y軸形成的三角形面積為0\n");
       printf("頂點座標為(%f,%f)\n",b/(-2*a),a*b/(-2*a)*b/(-2*a)+b*b/(-2*a)+c);
       system("pause");
       }
