#include <stdio.h>

void print(int);
void change_third_bit(int*);

int main(){
    int number;
    printf("Input number: ");
    scanf("%d", &number);
    print(number); 
    change_third_bit(&number);
    printf("Result number: %d \n", number);
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

void change_third_bit(int *number){
    int replace;
    int position = 3;
    int mask = 0xFFFFFFFF & ~(0x1 << (position - 1));
    printf("Input replace bit: ");
    scanf("%d", &replace);
    if(replace != 0 && replace != 1){
        printf("Error input \n");
        return;
    }
    *number = (*number & mask) | (replace << (position - 1));
}