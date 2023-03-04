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
// 迴圈樹狀二分搜尋法 
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
      insertBStree(&(*root)->left,node);         // else if  node 的 data 大於 *root 的 data 
               //              再度用 *root 的 right 和 node 呼叫insertBStree(),  
              //      else
              //              再度用 *root 的 left 和 node 呼叫insertBStree(),                //           
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
     // 建立二分搜尋樹 
     TreePointer btree=NULL;// 宣告一個 TreePointer btree, 並設為 NULL 
     insertBStree(&btree,E);// 呼叫 insertBStree(), 將 E 放入 二分搜尋樹btree 
     insertBStree(&btree,D);// 呼叫 insertBStree(), 將 D 放入 二分搜尋樹 btree 
     insertBStree(&btree,C);// 呼叫 insertBStree(), 將 C 放入 二分搜尋樹 btree
     insertBStree(&btree,A);// 呼叫 insertBStree(), 將 A 放入 二分搜尋樹 btree 
     insertBStree(&btree,B);// 呼叫 insertBStree(), 將 B 放入 二分搜尋樹 btree
     printf("%x,%d\n",search(btree,27),*search(btree,27));
     printf("%x,%d\n",search(btree,38),*search(btree,38));
     system("pause");// system("pause");
      
}
     
      
      
