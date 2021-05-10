#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n, m, i, j;
    scanf("%d %d", &m, &n);
    int mat[m][n];
    if (m > 0 && n > 0 && m == n)
    {
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < m; j++)
            {
                scanf("%d", &mat[i][j]);
            }
        }
        int sum1=0, sum2=0;
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < m; j++)
            {
                if (i == j)
                {
                    sum1=sum1+ mat[i][j];
                }
            }
        }
        for (i = 0; i < m; i++)
        {
            for (j = 0; j < n; j++)
            {
                if (i + j == (m -1))
                    sum2 = sum2 + mat[i][j];
            }
        }
        printf("%d",abs(sum1-sum2));

    }
    else
    {
        printf("Invalid input");
    }
    return 1;
}