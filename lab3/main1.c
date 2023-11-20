#include <stdio.h>

void PrintBinary(int);
void ChangeThirdBit(const int *);

int main()
{
    int number;
    printf("Input number: ");
    scanf("%d", &number);
    PrintBinary(number);
    ChangeThirdBit(&number);
    printf("Result number: %d \n", number);
    PrintBinary(number);
}

void PrintBinary(int number)
{
    printf("Binary representation: ");
    int flag = 32;
    while (flag > 0)
    {
        printf("%d", (number & 0x100000000) ? 1 : 0);
        number <<= 1;
        flag--;
    }
    printf("\n");
}

void ChangeThirdBit(const int *number)
{
    char *position = (char *)number;
    position += 2;
    int byte;
    printf("Input third byte: ");
    scanf("%d", &byte);
    *position = byte;
}