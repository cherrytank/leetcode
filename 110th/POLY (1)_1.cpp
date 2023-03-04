#include <stdio.h>
#include <stdlib.h>
#define MAX 100
#define TRUE 1
#define FALSE 0

struct poly {
   int degree;
   float coef[MAX];
};

typedef struct poly POLY;

int IsZero(POLY A){
    if(A.degree==0&&A.coef[0]==0)
      return true;
    else
      return false;
}

int Coef(POLY A,int i){
    return A.coef[i];
}

int LeadExp(POLY A){
    return A.degree;
}


POLY Attach(POLY A,int c,int e){
     if(e>A.degree){
      A.degree=e;
      A.coef[e]=c;
      return A;
      }
     else if(A.coef[e]!=0){
      return A;
      }
     else{ 
      A.coef[e]=c;
      return A;
      }
     
}

POLY Remove(POLY A, int e){
     if(A.degree>e){
      A.coef[e]=0;
      return A;
      }
     else if(A.degree<=e){
      A.coef[e]=0;
      for(;A.coef[A.degree]==0&&A.degree>=1;A.degree--);
      return A;
      }
}

int COMPARE(int a,int b){
	if(a<b) return -1;
	  else if(a==b) return 0;
		else return 1;
}

POLY ADD(POLY A, POLY B){
  POLY D={0,0,};
  int sum;
  while (!IsZero(A) && !IsZero(B)){
    switch(COMPARE(LeadExp(A),LeadExp(B))){
      case -1:
        D=Attach(D,Coef(B,LeadExp(B)),LeadExp(B));
        B=Remove(B,LeadExp(B));
        break;
      case 0:
        sum=Coef(A,LeadExp(A))+Coef(B,LeadExp(B));
        if(sum)
          D=Attach(D,sum,LeadExp(A));
        A=Remove(A,LeadExp(A));
        B=Remove(B,LeadExp(B));
        break;
      case 1:
        D=Attach(D,Coef(A,LeadExp(A)),LeadExp(A));
        A=Remove(A,LeadExp(A));
        break;
    }  
  }
  if(!IsZero(A)){
    for(;A.coef[A.degree]==0&&A.degree>=1;A.degree--)
      D=Attach(D,Coef(A,LeadExp(A)),LeadExp(A));
  }
  if(!IsZero(B)){
    for(;B.coef[B.degree]==0&&B.degree>=1;B.degree--)
      D=Attach(D,Coef(B,LeadExp(B)),LeadExp(B));
  }
  return D; 
} 
void printPOLY(POLY A)
{
     for(int n =A.degree;n>=0;n--)
       printf("%2gX^%d",A.coef[n],n);
     printf("\n");
}

int main(){
	POLY A={0,0,};
	A.degree=4;
	A.coef[4]=3;
	A.coef[1]=2;
	A.coef[0]=1;
	printPOLY(A);
	if(IsZero(A))
	   printf("A是零多項式\n");
	else
     printf("A不是零多項式\n");
	printf("A是%d次多項式,最高次係數為%d\n",LeadExp(A), Coef(A,LeadExp(A)));
	A=Attach(A, -6, 5);
	printPOLY(A);
	A=Remove(A,1);
	printPOLY(A);
	A=Remove(A,5);
	printPOLY(A);
	A=Remove(A,4);
	printPOLY(A);
  POLY B={0,0,};
  B.degree=2;
  B.coef[2]=1;
  B.coef[1]=2;
  B.coef[0]=3;
  POLY D={0,0,};
  D=ADD(A,B);
  printPOLY(D);
  system("pause");
}

