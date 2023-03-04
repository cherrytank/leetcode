#include<stdio.h>
#include<stdlib.h>

typedef struct node *TreePointer;
typedef struct node{
        int data;
        TreePointer left,right;
};

void preorder(TreePointer ptr)
{
     if(ptr){
             printf("%2d ",ptr->data);
             preorder(ptr->left);
             preorder(ptr->right);
         }

}

void postorder(TreePointer ptr)
{
if(ptr){
  postorder(ptr->left);
  postorder(ptr->right);
  printf("%2d ",ptr->data);
             }
}

void inorder(TreePointer ptr)
{
 if (ptr){
      inorder(ptr->left);
      printf("%2d ",ptr->data);
      inorder(ptr->right);
    }     
}

main()
{
      TreePointer  A, B, C, D, E;
     A=(TreePointer)malloc(sizeof(*A));// �t�m�@��node�Ŷ����� A ���V��node �Ŷ����_�l��}
     A->data=13;
     A->left=NULL;
     A->right=NULL;// �N A �� data �]�� 13, left �M right �]�� NULL
     B=(TreePointer)malloc(sizeof(*B));// �t�m�@��node�Ŷ����� B ���V��node �Ŷ����_�l��}
     B->data=36;
     B->left=NULL;
     B->right=NULL;// �N B �� data �]�� 36, left �M right �]�� NULL
     C=(TreePointer)malloc(sizeof(*C));// �t�m�@��node�Ŷ����� C ���V��node �Ŷ����_�l��}
     C->data=43;
     C->left=NULL;
     C->right=NULL;// �N C �� data �]�� 43, left �M right �]�� NULL
     D=(TreePointer)malloc(sizeof(*D));// �t�m�@��node�Ŷ����� D ���V��node �Ŷ����_�l��}
     D->data=27;
     D->left=NULL;
     D->right=NULL;// �N D �� data �]�� 27, left �M right �]�� NULL
     E=(TreePointer)malloc(sizeof(*E));//�t�m�@��node�Ŷ����� D ���V��node �Ŷ����_�l��}
     E->data=9;
     E->left=NULL;
     E->right=NULL;// �N D �� data �]�� 9, left �M right �]�� NULL
     A->left=C;
     A->right=B;// �N A�� left ���V C, right ���V B
     C->right=D;// �N C �� right ���V D
     B->left=E;// �N B�� left ���V E
     TreePointer S=A;// �ŧi�@�� TreePointer tree �ë��V A 
     inorder(S);// �I�s inoder() �N  tree ���Ҧ� node �ӵ� inorder���Ǩ��@�� 
     printf("\n");
     postorder(S);// �I�s postorder()  �N  tree ���Ҧ� node �ӵ� post order���Ǩ��@�� 
     printf("\n");
     preorder(S);// �I�s preorder()  �N  tree ���Ҧ� node �ӵ� pre order���Ǩ��@�� 
     printf("\n");
      system("pause");// system("pause");
      
}
     
      
      
