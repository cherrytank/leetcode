#include <stdio.h>
#include <stdlib.h>

typedef struct listNode* listPointer;
typedef struct listNode{
        int data;
        listPointer link;
};
main()
{
      listPointer  first, second, third;
      //�t�m�@�� node�A�ñNnode����m�s��first 
      
      //�t�m�@�� node�A�ñNnode����m�s��second 
      
      ////�t�m�@�� node�A�ñNnode����m�s��third 
      
       // first��data�]��10 
       //first��link�]��NULL 
      // second��data�]��20
       //second��link�]��NULL
       // third��data�]��30 
       // third��link�]��NULL 
      
	   // �I�sprintlist ��X first 
       // first��link�]��second 
       //�I�sprintlist ��X first 
       // second��link�]�� third 
       //�I�s printlist ��Xfirst 
      system("pause");
     
  
}
            
      
      
