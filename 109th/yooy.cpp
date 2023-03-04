#include<stdio.h>
#include<stdlib.h>
int main()
{
	int A[4][4]={{5,9,3,4},{6,8,2,1},{16,0,-27,0},{24,14,39,19}};
    int B[4][4]={{4,1,0,19},{3,2,-27,0},{9,8,0,17},{5,6,16,24}};
    int C[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int counten=0;
    int n;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
    {	
		for(int j=0;j<n;j++)
		{
			for(int k=0;k<n;k++)
    		{
    			C[i][j]=C[i][j]+A[i][k]*B[k][j];
    			counten++;	
				printf("%d\n",counten);			
			}
		}	
	}		
    printf("counten=%d\n",counten);	
}