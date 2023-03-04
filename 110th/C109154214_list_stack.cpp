#include <stdio.h>
#include <stdlib.h>

typedef struct listNode* listPointer;
typedef struct listNode{
        int data;
        listPointer link;
};


void push(listPointer *head, listPointer node)
{
     if(*head==NULL) //if *head is null
     {
      *head=node;  // �N*head �]�� node
        }
     else
        {
         node->link=*head;  // node��link ���V *head  
         *head=node;  // �N*head �אּ  node  
        }
}

int pop(listPointer *head)
{
    if(*head!=NULL)    // if *head ���� NULL 
    {
        int temp=(*head)->data;//���X *head��data���  temp 
        *head=(*head)->link;// �N *head �אּ *head���U�@�� �`�I 
        return temp;// �^�� temp 
        }
    else
       return -1;
} 

void printlist(listPointer first)
{
    while(first!= NULL)
    {
       printf("(%x,%d,%x)", first, first->data, first->link);
       first = first->link;
   };
   printf("\n");
}

main()
{
      listPointer  first, second, third;
      first = (listPointer) malloc(sizeof(*first));
      second = (listPointer) malloc(sizeof(*second));
      third =(listPointer) malloc(sizeof(*third));
      first->data= 10;
      first->link=NULL;
      second->data=20;
      second->link=NULL;
      third->data=30;
      third->link=NULL;
     
  
      printf("����STACK\n"); 
      listPointer stack=NULL;
      first->link=NULL;
      second->link=NULL;
      third->link=NULL;
      
      push(&stack, first); // push �Ĥ@��node 
      printlist(stack); // print stack 
      push(&stack, second);// push �ĤG��node 
      printlist(stack);// printf stack
      push(&stack, third);// push �ĤT��node 
      printlist(stack);//printf stack
      printf("Pop(%d)\n", pop(&stack)); // pop stack 
      printf("Pop(%d)\n", pop(&stack));// pop stack
      printf("Pop(%d)\n", pop(&stack));// pop stack
      system("pause");
      
}
            
      
      
