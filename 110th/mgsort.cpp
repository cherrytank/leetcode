#include <stdio.h>
#include <stdlib.h>

void Merge(int* array, int front, int mid, int end){

    int LeftSub[mid-front+1];
    int RightSub[end-mid+1];
    // 把array[front]~array[mid]放進 LeftSub[]
    for(int i=0;i<mid-front+1;i++)
      LeftSub[i]=array[front+i];
    // 把array[mid+1]~array[end]放進 RightSub[]
    for(int i=0;i<end-mid+1;i++)
      RightSub[i]=array[mid+i+1];
     int idxLeft=0;
     int idxRight=0;//idxLeft 用於  LeftSub, idxRight 用於 RightSub 
     int i=front;// array的 start index設為front 
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
     // front與end為矩陣範圍
     if(front<end){// 表示目前的矩陣範圍是有效的
     int mid=(front+end)/2;// mid即是將矩陣對半分的index
     MergeSort(array,front,mid);// 繼續divide矩陣的前半段subarray
     MergeSort(array,mid+1,end);// 繼續divide矩陣的後半段subarray
     Merge(array,front,mid,end);// 將兩個subarray做比較, 並合併出排序後的矩陣
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
