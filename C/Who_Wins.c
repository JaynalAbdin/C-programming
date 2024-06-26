#include <stdio.h>

int main()
{
    int n;
    scanf("%d", &n);

    int t = 0;
    int p = 0;
    for (int i = 0; i < n; i++)
    {
        long long x1, x2;
        scanf("%lld %lld", &x1, &x2);

        if (x1 > x2)
        {
            t++;
        }
        else if (x1 < x2)
        {
            p++;
        }
    }

    if (t > p)
    {
        printf("Tiger\n");
    }
    else if (p > t)
    {
        printf("Pathan\n");
    }
    else
    {
        printf("Draw\n");
    }
    return 0;
}