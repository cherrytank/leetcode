#include<stdio.h>
#include<stdlib.h>
typedef struct listNode* listPointer;
typedef struct listNode{
    int data;
    listPointer link;
};


void addq(listPointer *head, listPointer *tail, listPointer node)
{
     if(*head==NULL) //if *head is null
     {
        *head=node;// ?N*head ?]?? node
        *tail=node;//?N *tail ?]?? ndoe 
        }
     else
    {
        (*tail)->link =node;// ?N *tail??link?]?? node  
        *tail=node;// ?N *tail ?? node 
        }
}

int deleteq(listPointer *head, listPointer *tail)
{
    if(*head!=NULL)    // if *head ???? NULL 
    {
        int tepm=(*head)->data;//???X *head??data???  temp 
        *head=(*head)->link;   // ?N *head ?? *head???U?@?? ?`?I 
        if(*head==NULL)// if *head ?w?g?ONULL 
          *tail=NULL;  // *tail ?]?n?? NULL 
        return tepm;
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
      listPointer  first,second,third;
      first = (listPointer) malloc(sizeof(*first));
      second = (listPointer) malloc(sizeof(*second));
      third =(listPointer) malloc(sizeof(*third));
      first->data= 10;
      first->link=NULL;
      second->data=20;
      second->link=NULL;
      third->data=30;
      third->link=NULL;
     
      printf("????QUEUE\n"); 
      listPointer head=NULL, tail=NULL;
      first->link=NULL;
      second->link=NULL;
      third->link=NULL;
      addq(&head,&tail, first); // add ??@??node 
      printlist(head); // print queue 
      addq(&head,&tail, second);// add ??G??node 
      printlist(head);// printf queue
      addq(&head,&tail, third);// add ??T??node 
      printlist(head);//printf queue
      printf("DeleteQ(%d)\n", deleteq(&head, &tail));// delete queue 
      printf("DeleteQ(%d)\n", deleteq(&head, &tail));// delete queue
      printf("DeleteQ(%d)\n", deleteq(&head, &tail));// delete queue
      system("pause");
}
