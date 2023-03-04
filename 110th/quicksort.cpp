#include <stdio.h>
#include <stdlib.h>
#include <time.h>

void quicksort(int *data, int left, int right);
void swap(int *a, int *b);

int main(void)
{   
    clock_t start, end;
    srand( time(NULL) );
    int n;
    printf("enter data quantity:");
    scanf("%d",&n);
    start = clock();
    int data[n]={};
    for(int x=0;x<n;x++){
        data[x]=rand()%100;
    }
    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    quicksort(data,0,n);
    printf("\nresult: ");
    for (int i = 0; i < n; i++)
    {
        printf("%d ", data[i]);
    }
    printf("\n");
    end = clock();
    double diff = end - start; // ms
    printf("execution time:%fms" , diff);
    printf("\n");
    system("pause");
}

void quicksort(int *data, int left, int right)
{
    int pivot,i,j;
     if(left>=right)//�p�G left �j�󵥩� right �Nreturn 
     return;
     pivot=data[left];// �N pivot �]�� data[left] 
     i=left+1;// i�]�� left+1 
     j=right;// j �]�� right 
    while (1)
    {
         while(i<right)// �V�k���Ĥ@�Ӥj��pivot����Ʀ�m 
        {
             if(data[i]>pivot)// ��� data[i] �j�� pivot 
             break;
             i++;// �~�򩹥k 
        }

        while(j>left)// �V�����Ĥ@�Ӥp��pivot����Ʀ�m 
        {
             if(data[j]<pivot) 
             break; 
             j--;//�~�򩹥� 
        }
         if(i>=j)//�p�Gi�j��j�N�����j�� 
         break;
         swap(&data[i],&data[j]);//�洫 data[i] �M data[j] 
         for (int k = 0; k < j; k++){
            printf("%d ", data[k]);
            }
         printf("\n");
    }
     swap(&data[left],&data[j]);//�洫 data[left](�Ypivot) �M data[j] 
     for (int k = 0; k < j; k++){
        printf("%d ", data[k]);
        }
     printf("\n");
     quicksort(data,left,j-1);// ���j�I�squicksort()�N  data[left]~data[j-1]�Ƨ� 
     quicksort(data,j+1,right);//���j�I�squicksort()�N data[j+1]~data[right]�Ƨ� 
}

void swap(int *a, int *b)
{
    int temp = *a;
    *a = *b;
    *b = temp;
}
