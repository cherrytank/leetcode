#include<stdio.h>
#include<stdlib.h>
#include<time.h>

void print_arrray(int** array,int quantity){
    printf("array:\n");
    printf("      ");
    for (int i = 0; i < quantity; i++)
        printf("   {%2d} ",i); 
    printf("\n");     
    for(int i = 0; i<quantity; i++){
        printf(" {%2d} ",i);
        for(int j = 0; j<quantity; j++){
            printf(" %5d, ",array[i][j]);
        }
        printf("\n");
    }
}

int **born_weight(int** array,int weight,int quantity){

    if(weight==0){
        for(int i = 0; i< quantity; i++){
            for(int j = 0+i; j< quantity; j++){
                if(i==j)
                    array[i][j]=0;
                else
                    array[i][j]=rand() % 99;
            }
        }
    }
    else{
         for(int i = 0; i< quantity; i++){
            for(int j = 0+i; j< quantity; j++){
                if(i==j)
                    array[i][j] = 0;
                else
                    array[i][j]=rand() % weight;
            }
        }
    }
    for(int i = 0; i< quantity; i++){
        for(int j = 1; j< quantity; j++){
            array[j][i]=array[i][j];
        }
    }

    return array;
}

int* foundmin(int** array,int quantity,int index){
    int min = 999;
    int en_index;
    for(int i = 0; i < quantity ;i++){
        if(min > array[index][i] && array[index][i] != 0){
            min=array[index][i];
            en_index=i;
        }
    }
    int* array_return = (int*)malloc(2 * sizeof(int));
    array_return[0]=min;
    array_return[1]=en_index;
    return array_return;
}

int MST(int** array,int quantity,int index){
    int predecessor=0;
    int visited[quantity];
    int counter=0;
    int index_x=index;
    int sum = 0;
    int check=0;
    visited[index]=1;
    for(int i = 0; i<quantity; i++){
        visited[i]=0;
        array[i][index]=0;
    }
    printf("MST weight:");
    while(check<quantity-1){
        int* array_return=foundmin(array,quantity,index_x);
        for (int i = 0; i < quantity; i++){
            array[i][array_return[1]]=0;
        }
        visited[index_x]=1;
        predecessor += array_return[0];
        printf("%d,",array_return[0]);
        index_x=array_return[1];
        check++;
    }
    return predecessor;
}



int main(){
    int node,node_q,weight;
    srand(time(NULL));
    printf("plase enter nodes quantity:");
    scanf("%d",&node);
    printf("plase enter weight(0=random):");
    scanf("%d",&weight);
    node_q = node--;
    int* array_tree[node_q];
    int array_tree_2[node_q][node_q];
    for(int j = 0; j<node_q; j++)
        array_tree[j] = array_tree_2[j];
    int** array_out=born_weight(array_tree,weight,node_q);
    print_arrray(array_out,node_q);
    printf("\nMST=%d\n",MST(array_out,node_q,0));
    system("pause");
}