#include <stdio.h>

int main()
{
    char s[1001];
    int cnt[26] = {0};

    scanf("%s", &s);

    for (int i = 0; s[i] != '\0'; i++)
    {
        int val = s[i] - 'a';
        if (s[i] >= 'a' && s[i] <= 'z')
        {
            cnt[val]++;
        }
    }
    for (int i = 0; i < 26; i++)
    {
        printf("%c - %d\n", i + 'a', cnt[i]);
    }

    return 0;
}
