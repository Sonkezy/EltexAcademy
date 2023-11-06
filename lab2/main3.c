#include <stdio.h>

#define N 10

void initialize_array(int array[N]);
void print_array(int array[N]);
void reverse_array(int array[N]);

int main(){
    int array[N];
    initialize_array(array);
    print_array(array);
    reverse_array(array);
    print_array(array);
}

void initialize_array(int array[N]){
    for(int i=0;i<N;i++){
        array[i] = i+1;
    }
}

void print_array(int array[N]){
    for(int i=0;i<N;i++){
        printf("%d \t", array[i]);    
    }
    printf("\n");
}

void reverse_array(int array[N]){
    int tmp = 0;
    for(int i=0;i<N/2;i++){
        tmp = array[i];
        array[i] = array[N-i-1];
        array[N-i-1] = tmp; 
    }
}
