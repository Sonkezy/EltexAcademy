#include <stdio.h>

void print(int);

int main(){
    int number;
    printf("Input number: ");
    scanf("%d", &number);
    print(number);   
}

void print(int number){
    printf("Binary representation: ");
    int flag = 32;
    while(flag>0){
        printf("%d", (number & 0x100000000) ? 1 : 0);
        number <<= 1;
        flag--;
    }
    printf("\n");
}