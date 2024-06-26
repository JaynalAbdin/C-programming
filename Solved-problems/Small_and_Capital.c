#include <stdio.h>
#include <string.h>
int main()
{
    char s[1001];
    scanf("%s", s);
    int countCapital = 0;
    int countLower = 0;
    for (int i = 0; i < strlen(s); i++)
    {
        if (s[i] >= 'A' && s[i] <= 'Z')
        {
            countCapital++;
        }
        else if (s[i] >= 'a' && s[i] <= 'z')
        {
            countLower++;
        }
    }
    printf("%d %d", countCapital, countLower);

    return 0;
}