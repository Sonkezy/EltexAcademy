#include <stdio.h>

void print(int);

int main(){
    int number;
    printf("Input number: ");
    scanf("%d", &number);
    print(number);   
}

void print(int number){
    printf("Number of one's in binary representation: ");
    int counter = 0;
    int flag = 32;
    while(flag>0){
        counter += (number & 0x100000000) ? 1 : 0;
        number <<= 1;
        flag--;
    }
    printf("%d\n", counter);
}