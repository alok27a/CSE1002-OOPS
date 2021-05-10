#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int mat1[10][10], mat2[10][10], res[10][10];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    int sum=0;
    for (i = 0; i < r; i++)
    {
        sum+=mat1[0][i];
    }
    printf("%d",sum);
    return 1;
}
