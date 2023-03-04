#include <stdio.h>
#include <stdlib.h>

typedef struct listNode *listPointer;
typedef struct listNode{
        int data;
        listPointer link;
};
/*
void push(listPointer * head, listPointer node)
{
     if(   ) //if head is null
     {
          // 將*head 設為 node
        }
     else
        {
           // node 指向 *head  
           // 將*head 改為  node  
        }
}

int pop(listPointer *head)
{
    if( )    // if *head 不為 NULL 
    {
         //取出 *head的data放到  temp 
         // 將 *head 改為 *head的下一個 節點 
         // 回傳 temp 
        }
    //回傳-1 
} 

void addq(listPointer * head, listPointer* tail, listPointer node)
{
     if(  ) //if *head is null
     {
         // 將*head 設為 node
        //將 *tail 設為 ndoe 
        }
     else
        {
           // 將 *tail的link設為 node  
           // 將 *tail 改為 node 
        }
}

int deleteq(listPointer *head, listPointer *tail)
{
    if(  )    // if *head 不為 NULL 
    {
        //取出 *head的data放到  temp 
        // 將 *head 改為 *head的下一個 節點 
        // if *head 已經是NULL 
        // *tail 也要改為 NULL 
        // 回傳 temp 
        }
    //回傳-1 
} 
     
*/
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
     
      first->link=second;
      printlist(first);
      second->link=third;
      printlist(first);
      system("pause");
    /* 
      
      printf("模擬STACK\n"); 
      listPointer stack=NULL;
      first->link=NULL;
      second->link=NULL;
      third->link=NULL;
      
      // push 第一個node 
      // print stack 
      // push 第二個node 
      // printf stack
      // push 第三個node 
      //printf stack
      // syste("pause");
      // pop stack and print pop() return value  
      // print pop stack and print pop() return value 
      // print pop stack and print pop(0 return value
      // system("pause");
      
      printf("模擬QUEUE\n"); 
      listPointer head=NULL, tail=NULL;
      first->link=NULL;
      second->link=NULL;
      third->link=NULL;
      // add 第一個node 
      // print queue 
      // add 第二個node 
      // print queue
      // add 第三個node 
      //printf queue
      // system("pause");
      // delete queue and print delete() return value
      // delete queue and print delete() return vaule
      // delete queue and print delete() return vaule
      system("pause");// system("pause");
      */
}
            
      
      
