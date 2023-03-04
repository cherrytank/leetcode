#include <stdio.h>
#include <stdlib.h>
#define lparen 1
#define rparen 2
#define plus 3
#define minus 4
#define divide 5
#define times 6
#define mod 7
#define eos 8
#define operand 0
#define MAX_SIZE 1000
char expr[80];
int stack[MAX_SIZE];
int top=-1;

void push(int item)
{
     if(top==MAX_SIZE-1){
        printf("stack is full");
        return;
        }
     else{
        expr[++top]=item;
        return;
        }               
}

int pop()
{
    if(top==-1){
        printf("stack is empty");
        return -1;
        }
     else{
        return expr[top--];
        }
}

int getToken(char* symbol, int* n)
{
  *symbol=expr[(*n)++];
  switch(*symbol){
   case'(':return lparen;
   case')':return rparen;
   case'+':return plus;
   case'-':return minus;
   case'/':return divide;
   case'*':return times;
   case'%':return mod;
   case'\0':return eos;
   default:return operand;
}
}

int eval()
{
 int token;
 char symbol;
 int op1,op2;
 int n=0;
 int top=-1;
 token=getToken(&symbol,&n);
 while(token!=eos){
  if(token==operand)
    push(symbol-'0');
  else{
    op2=pop();
    op1=pop();
    switch(token){
     case plus:push(op1+op2);
                break; 
     case minus:push(op1-op2);
                break;
     case times:push(op1*op2);
                break;
     case divide:push(op1/op2);
                break;
     case mod:push(op1%op2);
                break;
}
}
token=getToken(&symbol,&n);
}
return pop();
}

main()
{
	scanf("%s", expr); // ��J43*12+/
	printf("ANSER:%d\n", eval()); // ��X  ANSWER:4 
	system("pause"); 
}
