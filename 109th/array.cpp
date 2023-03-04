#include<stdio.h>
#include<stdlib.h>

main(){
	int a[5][5]{{0,0,0,0,1},{0,1,1,0,0},{0,0,0,1,0},{0,1,0,0,0},{0,0,1,0,1}};
	int b[5][5]{{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0},{0,0,0,0,0}};
    for(int i=0;i<5;i++){
		for(int j=0;j<5;j++){
			if(i==4&&j==4)
			b[i][j] = a[i][j]+a[i-1][j]+a[i][j-1]+a[i-1][j-1];
			else if(i==0&&j==0)
			b[i][j] = a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1];
			else if(i>0&&j==0)
			b[i][j] = a[i][j]+a[i+1][j]+a[i][j+1]+a[i+1][j+1]+a[i-1][j]+a[i-1][j+1];
			else if(i==4&&j==0)
			b[i][j] = a[i][j]+a[i-1][j]+a[i-1][j+1]+a[i][j+1];
			else if(i==0&&j>0)
			b[i][j] = a[i][j]+a[i][j-1]+a[i+1][j-1]+a[i][j+1]+a[i+1][j]+a[i+1][j+1];
			else if(i==0&&j==4)
			b[i][j] = a[i][j]+a[i+1][j]+a[i][j-1]+a[i+1][j-1];
			else if(i>0&&j==4)
			b[i][j] = a[i][j]+a[i+1][j]+a[i][j-1]+a[i+1][j-1]+a[i-1][j]+a[i-1][j-1];
			else if(i==4&&j>0)
			b[i][j] = a[i][j]+a[i][j-1]+a[i-1][j-1]+a[i][j+1]+a[i-1][j]+a[i-1][j+1];
			else 
			b[i][j] = a[i][j]+a[i-1][j]+a[i+1][j]+a[i-1][j-1]+a[i-1][j+1]+a[i+1][j-1]+a[i+1][j+1]+a[i][j+1]+a[i][j-1];
		}
	}		
	for(int x=0;x<5;x++){
		for(int y=0;y<5;y++){
			printf("%d ",b[x][y]);
		}
		printf("\n");
	}
	system("pause");
}
