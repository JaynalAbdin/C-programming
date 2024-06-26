#include <stdio.h>

int main()
{
    int tst;
    scanf("%d", &tst);
    for (int i = 1; i <= tst; i++)
    {
        int w, h;
        scanf("%d %d", &w, &h);
        if (w == h)
        {
            printf("Square\n");
        }
        else
        {
            printf("Rectangle\n");
        }
    }

    return 0;
}