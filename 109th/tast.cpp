#include<stdio.h>
#include<stdlib.h>
#include<math.h>


main(){
       float a,b,c;
       scanf("%f%f%f",&a,&b,&c);
       float d = b*b-4*a*c;
       if(d>0)
       printf("�PX�b�J�I��(%f,0),(%f,0)\n",(-b+sqrt(d))/(2*a),(-b-sqrt(d))/(2*a));
       if(d==0)
       printf("�PX�b�J�I��%f\n",(-b+sqrt(d))/(2*a));
       if(d<0)
       printf("�PX�b�S���J�I\n");
       printf("�PY�b�J�I��(0,%f)\n",c);
       if(d>0 && c!=0)
       printf("�PX�b�PY�b�Φ����T���έ��n��%f\n",sqrt(d)*sqrt(c*c)/(2*a));
       else
       printf("�PX�b�PY�b�Φ����T���έ��n��0\n");
       printf("���I�y�Ь�(%f,%f)\n",b/(-2*a),a*b/(-2*a)*b/(-2*a)+b*b/(-2*a)+c);
       system("pause");
       }
