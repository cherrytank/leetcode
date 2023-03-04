#include<stdio.h>

int main(){
    int A[4][4]={{5,9,3,4},{6,8,2,1,},{16,0,-27,0},{24,17,39,19}};
    int B[4][4]={{24,16,6,5},{17,0,8,9},{39,-27,2,3},{19,0,1,4}};
    int C[4][4]={{0,0,0,0},{0,0,0,0},{0,0,0,0},{0,0,0,0}};
    int n;
    int counter=0;
    scanf("%d",&n);
    for(int i=0;i<n;i++)
        for(int j=0;j<n;j++)
            for(int k=0;k<n;k++){
                C[i][j]=C[i][j]+A[i][k]*B[k][j];
                counter++;
                }
    printf("%d",counter);
}