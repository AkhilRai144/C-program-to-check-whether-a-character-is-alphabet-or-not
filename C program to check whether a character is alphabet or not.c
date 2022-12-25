// C program to check whether a character is alphabet or not

#include <stdio.h>
int main()
{
    char ch;
    printf("Enter a character: ");
    scanf("%c", &ch);

    if (ch >= 'a' && ch <= 'z' || ch >= 'A' && ch <= 'Z')
    {
        printf("%c is alphabet", ch);
    }
    else
    {
        printf("Not alphabet");
    }

    return 0;
}