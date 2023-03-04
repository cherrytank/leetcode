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
      *head=node;  // 將*head 設為 node
        }
     else
        {
         node->link=*head;  // node的link 指向 *head  
         *head=node;  // 將*head 改為  node  
        }
}

int pop(listPointer *head)
{
    if(*head!=NULL)    // if *head 不為 NULL 
    {
        int temp=(*head)->data;//取出 *head的data放到  temp 
        *head=(*head)->link;// 將 *head 改為 *head的下一個 節點 
        return temp;// 回傳 temp 
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
     
  
      printf("模擬STACK\n"); 
      listPointer stack=NULL;
      first->link=NULL;
      second->link=NULL;
      third->link=NULL;
      
      push(&stack, first); // push 第一個node 
      printlist(stack); // print stack 
      push(&stack, second);// push 第二個node 
      printlist(stack);// printf stack
      push(&stack, third);// push 第三個node 
      printlist(stack);//printf stack
      printf("Pop(%d)\n", pop(&stack)); // pop stack 
      printf("Pop(%d)\n", pop(&stack));// pop stack
      printf("Pop(%d)\n", pop(&stack));// pop stack
      system("pause");
      
}
            
      
      
