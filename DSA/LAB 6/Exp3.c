#include <stdio.h>
#include <string.h>

int isVowel(char ch)
{
    if (ch == 'a' || ch == 'A')
        return 1;
    if (ch == 'e' || ch == 'E')
        return 1;
    if (ch == 'i' || ch == 'I')
        return 1;
    if (ch == 'o' || ch == 'O')
        return 1;
    if (ch == 'u' || ch == 'U')
        return 1;

    return 0;
}

int main()
{

    char str[100];
    printf("Enter a sentence : ");
    scanf("%[^\n]%*c", str);

    int length = strlen(str);
    int count = 0, occurences = 0;

    for (int i = 0; i < length; i++)
    {

        if (isVowel(str[i]))
        {
            count++;
            if (count == 2)
            {
                occurences++;
            }
        }
        else
        {
            count = 0;
        }
    }

    printf("\n Number of occurences : %d", occurences);

    return 0;
}
