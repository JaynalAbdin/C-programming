#include <stdio.h>

int main()
{

    int tst;
    scanf("%d", &tst);
    for (int i = 0; i < tst; i++)
    {
        long long int s, a, b, c;
        long long int s2;
        long long int result;
        scanf("%lld %lld %lld %lld", &s, &a, &b, &c);
        s2 = (a + b + c);
        result = s - s2;
        printf("%lld\n", result);
    }

    return 0;
}