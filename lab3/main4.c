#include <stdio.h>

#define SIZE 1000

char *GetSubstringPointer();

int main()
{
    char *result = GetSubstringPointer();
    for (int i = 0; result != NULL && *(result + i); i++)
    {
        printf("%c", *(result + i));
    }
    printf("\n");
    return 0;
}

char *GetSubstringPointer()
{
    char string[SIZE];
    char substring[SIZE];
    printf("Input string: ");
    scanf(" %s", string);

    printf("Input substring: ");
    scanf(" %s", substring);

    for (int i = 0; i < SIZE && string[i]; i++)
    {
        char *string_pointer = &string[i];
        char *substring_pointer = substring;
        int flag = 1;
        for (int j = 0; *(substring_pointer + j); j++)
        {
            if (*(string_pointer + j) != *(substring_pointer + j))
            {
                flag = 0;
                break;
            }
        }
        if (flag)
        {
            printf("Substring finded!\n");
            return string_pointer;
        }
    }
    printf("Substring not finded!\n");
    return NULL;
}