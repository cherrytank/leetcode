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
          // �N*head �]�� node
        }
     else
        {
           // node ���V *head  
           // �N*head �אּ  node  
        }
}

int pop(listPointer *head)
{
    if( )    // if *head ���� NULL 
    {
         //���X *head��data���  temp 
         // �N *head �אּ *head���U�@�� �`�I 
         // �^�� temp 
        }
    //�^��-1 
} 

void addq(listPointer * head, listPointer* tail, listPointer node)
{
     if(  ) //if *head is null
     {
         // �N*head �]�� node
        //�N *tail �]�� ndoe 
        }
     else
        {
           // �N *tail��link�]�� node  
           // �N *tail �אּ node 
        }
}

int deleteq(listPointer *head, listPointer *tail)
{
    if(  )    // if *head ���� NULL 
    {
        //���X *head��data���  temp 
        // �N *head �אּ *head���U�@�� �`�I 
        // if *head �w�g�ONULL 
        // *tail �]�n�אּ NULL 
        // �^�� temp 
        }
    //�^��-1 
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
      
      printf("����STACK\n"); 
      listPointer stack=NULL;
      first->link=NULL;
      second->link=NULL;
      third->link=NULL;
      
      // push �Ĥ@��node 
      // print stack 
      // push �ĤG��node 
      // printf stack
      // push �ĤT��node 
      //printf stack
      // syste("pause");
      // pop stack and print pop() return value  
      // print pop stack and print pop() return value 
      // print pop stack and print pop(0 return value
      // system("pause");
      
      printf("����QUEUE\n"); 
      listPointer head=NULL, tail=NULL;
      first->link=NULL;
      second->link=NULL;
      third->link=NULL;
      // add �Ĥ@��node 
      // print queue 
      // add �ĤG��node 
      // print queue
      // add �ĤT��node 
      //printf queue
      // system("pause");
      // delete queue and print delete() return value
      // delete queue and print delete() return vaule
      // delete queue and print delete() return vaule
      system("pause");// system("pause");
      */
}
            
      
      
