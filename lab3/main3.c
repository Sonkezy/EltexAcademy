#include <stdio.h>

#define SIZE 10

void FillArray(const int *array);
void PrintArray(const int *array);

int main()
{
    int array[SIZE] = {};
    FillArray(array);
    PrintArray(array);
}

void FillArray(const int *array)
{
    int *position = (int *)array;
    for (int i = 0; i < SIZE; i++)
    {
        *(position + i) = i + 1;
    }
}

void PrintArray(const int *array)
{
    int *position = (int *)array;
    for (int i = 0; i < SIZE; i++)
    {
        printf("%d ", *(position + i));
    }
    printf("\n");
}