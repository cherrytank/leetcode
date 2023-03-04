#include<stdio.h>
#include<stdlib.h>
void strcopy(char* a,char* b);
int str(char* a);
int i= 0;
main(){
	char a[80];
	char b[80];
	scanf("%s%s",a,b);
	strcopy(a,b);
	printf("%s\n",a);
	system("pause");
}

void strcopy(char* a,char* b){
	int y=str(a);
	for(i=0;b[i]!='\0';i++){
		a[y+i]=b[i];
	}
}

int str(char* a){
	for(i=0;a[i]!='\0';i++);
	return i;
}
