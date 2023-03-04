#include<stdio.h>
#include<stdlib.h>

main(){
  int M=13;  
  int S[7]={62,42,13,57,8,60,73};
  int H[13];
  for(int O=0;O<13;O++)
      H[O]=-1;
  for(int i=0;i<7;i++){
      int K=S[i]%M;
      if(H[K]==-1)
        H[K]=S[i];
      else
        while(H[K]!=-1){
            K++;
            if(H[K]==-1){
            H[K]=S[i];
            break;
            }            
            if(K>13){
            printf("error:K>13\n");
            break;
            }
        }
  }
  for(int J=0;J<13;J++)
  printf("%2d ",H[J]);
  system("pause");  
}