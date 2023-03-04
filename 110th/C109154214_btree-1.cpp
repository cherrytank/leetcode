#include <stdio.h>
#include <stdlib.h>

typedef struct node* TreePointer;
typedef struct node{
        int data;
        TreePointer left, right;
};

int* iterSearch(TreePointer root, int key)
{ 
    while(root){
       if(root->data==key)
        return &(root->data);         
       else if(root->data>key)
         root=root->left;
       else if(root->data>key)
         root=root->right; 
   }
   return NULL;
}

int* search(TreePointer root, int key)
{
// �j��𪬤G���j�M�k 
   if(!root)
     return NULL;
   if(root->data==key)
    return &(root->data);
   else if((root->data)<key)
    return search(root->right,key);
   else if((root->data)>key)
    return search(root->left,key);
}
    
    
void insertBStree(TreePointer *root, TreePointer node)
{ if(*root==NULL)
   *root=node;// if *root == NULL
  else if((node->data)>(*root)->data)
      insertBStree(&(*root)->right,node);
  else           
      insertBStree(&(*root)->left,node);         // else if  node �� data �j�� *root �� data 
               //              �A�ץ� *root �� right �M node �I�sinsertBStree(),  
              //      else
              //              �A�ץ� *root �� left �M node �I�sinsertBStree(),                //           
}

main()
{
     TreePointer  A, B, C, D, E;
     A=(TreePointer)malloc(sizeof(*A));
     A->data=35;
     A->left=NULL;
     A->right=NULL;
     B=(TreePointer)malloc(sizeof(*B));
     B->data=46;
     B->left=NULL;
     B->right=NULL;
     C=(TreePointer)malloc(sizeof(*C));
     C->data=20;
     C->left=NULL;
     C->right=NULL;
     D=(TreePointer)malloc(sizeof(*D));
     D->data=27;
     D->left=NULL;
     D->right=NULL;
     E=(TreePointer)malloc(sizeof(*E));
     E->data=38;
     E->left=NULL;
     E->right=NULL;
     // �إߤG���j�M�� 
     TreePointer btree=NULL;// �ŧi�@�� TreePointer btree, �ó]�� NULL 
     insertBStree(&btree,E);// �I�s insertBStree(), �N E ��J �G���j�M��btree 
     insertBStree(&btree,D);// �I�s insertBStree(), �N D ��J �G���j�M�� btree 
     insertBStree(&btree,C);// �I�s insertBStree(), �N C ��J �G���j�M�� btree
     insertBStree(&btree,A);// �I�s insertBStree(), �N A ��J �G���j�M�� btree 
     insertBStree(&btree,B);// �I�s insertBStree(), �N B ��J �G���j�M�� btree
     printf("%x,%d\n",search(btree,27),*search(btree,27));
     printf("%x,%d\n",search(btree,38),*search(btree,38));
     system("pause");// system("pause");
      
}
     
      
      
