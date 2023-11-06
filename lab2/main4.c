#include <stdio.h>
#include <stdlib.h>

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
            int switcher =  ((j+1) - (i+1) + N) / N;
            int Ic = abs((i+1) - N / 2  - 1) + i/(N /2) * ((N-1) % 2);
            int Jc = abs((j+1) - N / 2  - 1) + j/(N /2) * ((N-1) % 2);
            int Ring = N / 2 - (abs(Ic - Jc) + Ic + Jc) / 2;
            int Xs = i - Ring + j - Ring + 1;    
            int Coef =  4 * Ring * (N - Ring);
            matrix[i][j] = Coef + switcher * Xs + abs(switcher - 1) * (4 * (N - 2 * Ring) - 2 - Xs); 
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
