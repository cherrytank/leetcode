#include<stdio.h>
#include<stdlib.h>
#include<math.h>
#define MAX_SIZE 101
#define SWAP(x,y,t)((t)=(x),(x)=(y),(y)=(t))
void sort(int*,int);
int binarysearch(int*,int,int,int);
int compare(int,int);
main(){
	int i,n,s;
	int list[MAX_SIZE];
	printf("Enter the number of numbers to generate:");
	scanf("%d",&n);
	for(i=0;i<n;i++){
		list[i]=rand()%1000;
		printf("%d ",list[i]);
	}
	sort(list,n);
	printf("\n Sorted array:\n");
	for(i=0;i<n;i++)
		printf("%d ",list[i]);
	printf("\n");
	scanf("%d",&s);
	int R =binarysearch(list,s,0,n-1);
	printf("%d",R);
}

void sort(int* list,int n){
	int i,j,min,trmp;
	for(i=0;i<n;i++){
		min=i;
		for(j=i+1;j<n;j++)
			if(list[j]<list[min])
				min=j;
			SWAP(list[i],list[min],trmp);
	}
}

int compare(int x,int y){
	if(x<y) return -1;
	else if(x==y) return 0;
		else return 1;
}

int binarysearch(int* list,int searchnum,int left,int right){
	int middle;
	if(left<=right){
		middle=(left+right)/2;
		switch(compare(list[middle],searchnum)){
			case -1:return binarysearch(list,searchnum,middle+1,right);
			case 0:return middle;
			case 1:return binarysearch(list,searchnum,left,middle-1);
		}
	}
	return -1;
}

