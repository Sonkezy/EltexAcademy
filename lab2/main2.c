#include <stdio.h>

#define N 10

void initialize_matrix(int matrix[N][N]);
void print_matrix(int matrix[N][N]);

int main(){
    int matrix[N][N];
    initialize_matrix(matrix);
    print_matrix(matrix);
}

void initialize_matrix(int matrix[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            matrix[i][j] = (i+j+1 < N) ? 0 : 1;
        }
    }
}

void print_matrix(int matrix[N][N]){
    for(int i=0;i<N;i++){
        for(int j=0;j<N;j++){
            printf("%d \t",matrix[i][j]);
        }
        printf("\n");
    }
}
