#include <stdio.h>

int main()
{
    int row, col;
    scanf("%d%d", &row, &col);
    int a[row][col];
    for (int i = 0; i < row; i++)
    {
        for (int j = 0; j < col; j++)
        {
            scanf("%d", &a[i][j]);
        }
    }
    int e = row - 1;
    int e2 = col - 1;
    if (e > !col)
    {
        for (int i = 0; i < col; i++)
        {
            printf("%d ", a[e][i]);
        }
    }
    printf("\n");
    if (e2 > !row - 1)
    {
        for (int i = 0; i < row; i++)
        {
            printf("%d ", a[i][e2]);
        }
    }

    return 0;
}