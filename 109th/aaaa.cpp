#include <stdio.h>
#include <stdlib.h>
void SI(int x,int y);
void SP(int x,int y);
int iS[8][4];
int x,y,z;
int main(void)
{
 SI(x,y);
 SP(x,y);
return 0;
}
void SI(int x,int y)
{
 int z=0;
 for(x=0;x<8;x++)
 {
  for(y=0;y<3;y++)
  {
   if(y==0)
   {
    printf("????      :");
   }
   else if(y==1)
   {
    printf("??????:");
      }
      else
      {
       printf("??????   :");
   }
   scanf("%d",&iS[x][y]);
 }
}
for(x=0;x<8;x++)
{
 iS[z++][3]=iS[x][1]+iS[x][2];
} 
}
void SP(int x,int y)
{
 for(x=0;x<8;x++)
 {
  for(y=0;y<4;y++)
 {
  if(y==0)
  {
   printf("??:%3d ",iS[x][y]);
  }
  else if(y==1)
  {
   printf("????:%3d ",iS[x][y]);
  }
  else if(y==2)
  {
   printf("????:%3d ",iS[x][y]);
  }
  else 
   {
    printf("??:%3d\n",iS[x][y]);
   }
 }
 }
}
