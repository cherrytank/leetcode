 #include<stdio.h>
 #include<stdlib.h>
 #include<time.h>
 #define M 11
 #define NUM 30
 #define YES 1
 #define NO 0

struct node {
   int data;
   struct node* next;
};
typedef struct node  NODE;
void insert(NODE**, NODE*);
void showhash(NODE**);
void printlist(NODE*);

main(){
  int  i=0;
  NODE* hash[M]={NULL,};
  NODE* newnode;
  srand(time(NULL));
  while(i<NUM){
     newnode=(NODE*)malloc(sizeof(*newnode)); 
     newnode->data=rand()%100;
     newnode->next=NULL;
     insert(&hash[(newnode->data)%M],newnode); 
     i++;
   }
   showhash(hash);
   system("pause");
}

void insert(NODE** hash, NODE* newnode)
{
	
    if(*hash==NULL)
      *hash=newnode;
    else    
      insert(&((*hash)->next),newnode); 
}

void showhash(NODE** hash)
{
  int i;
  for(i=0 ; i<M ; i++)
     printlist(hash[i]);
}

void printlist(NODE* hash)
{
   while(hash!=NULL){
     printf("%d->",hash->data);
     hash=hash->next;
   }
   printf("NULL\n");
}