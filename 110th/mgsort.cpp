#include <stdio.h>
#include <stdlib.h>

void Merge(int* array, int front, int mid, int end){

    int LeftSub[mid-front+1];
    int RightSub[end-mid+1];
    // ��array[front]~array[mid]��i LeftSub[]
    for(int i=0;i<mid-front+1;i++)
      LeftSub[i]=array[front+i];
    // ��array[mid+1]~array[end]��i RightSub[]
    for(int i=0;i<end-mid+1;i++)
      RightSub[i]=array[mid+i+1];
     int idxLeft=0;
     int idxRight=0;//idxLeft �Ω�  LeftSub, idxRight �Ω� RightSub 
     int i=front;// array�� start index�]��front 
      while(idxLeft<=mid-front && idxRight<=end-mid-1) 
       if (LeftSub[idxLeft] <= RightSub[idxRight] ) {
            array[i++] = LeftSub[idxLeft];
            idxLeft++;
        }
        else{
            array[i++] = RightSub[idxRight];
            idxRight++;
        }
      
	  while(idxLeft<=mid-front){
        array[i++] = LeftSub[idxLeft];
            idxLeft++;
        }
      
	   while(idxRight<=end-mid-1){
            array[i++] = RightSub[idxRight];
            idxRight++;
        }
        		 
}

void MergeSort(int* array, int front, int end){
     // front�Pend���x�}�d��
     if(front<end){// ��ܥثe���x�}�d��O���Ī�
     int mid=(front+end)/2;// mid�Y�O�N�x�}��b����index
     MergeSort(array,front,mid);// �~��divide�x�}���e�b�qsubarray
     MergeSort(array,mid+1,end);// �~��divide�x�}����b�qsubarray
     Merge(array,front,mid,end);// �N���subarray�����, �æX�֥X�Ƨǫ᪺�x�}
    }
}

main()
{
	int A[8]={5,3,8,6,2,7,1,4};
	MergeSort(A,0,7);
	
	for(int i=0 ; i<8 ; i++)
	   printf("%3d", A[i]);
	   
	system("pause");
}
