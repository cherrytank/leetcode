#include<stdio.h>
#include<stdlib.h>
typedef struct listNode* listPointer;
typedef struct listNode{
  int data;
  listPointer link;
};
void printList(listPointer first){
     for(;first;first=first->link)
       printf("%4d",first->data);
       printf("\n");
 }
main(){
  listPointer first,second,third;
  first =(listPointer)malloc(sizeof(*first));
  second=(listPointer)malloc(sizeof(*second));
  third =(listPointer)malloc(sizeof(*third));
  first->data =10;
  first->link =NULL;
  second->data =20;
  second->link =NULL;
  third->data =30;
  third->link =NULL;
  printList(first);
  first->link =second;
  printList(first);
  second->link=third;
  printList(first);
  system("pause");
}
