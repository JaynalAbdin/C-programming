#include <stdio.h>
int main()
{
    int n;
    scanf("%d", &n);
    int a[n];
    for (int i = 0; i < n; i++)
    {
        scanf("%d", &a[i]);
    }

    int counteven = 0;
    int countodd = 0;
    for (int i = 0; i < n; i++)
    {
        if (a[i] % 2 == 0)
        {
            counteven++;
        }
        else if (a[i] % 2 == 1)
        {
            countodd++;
        }
    }
    printf("%d %d", counteven, countodd);

    return 0;
}