#include<stdio.h>

void AND(char*,char*,char*);
main(){
	char a[9],b[9],c[9];
	scanf("%s",a);
	scanf("%s",b);
	AND(a,b,c);
	for(int i=0;i<9;i++)
		printf("%c",c[i]);
}

void AND(char* a,char* b,char* c){
	for(int j=0;j<9;j++){
		if(a[j]=='1'&&b[j]=='1')
		c[j]='1';
		else
		c[j]='0';
	}
}
