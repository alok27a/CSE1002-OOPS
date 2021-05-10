#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int r, c, i, j;
    scanf("%d %d", &r, &c);
    int mat1[10][10], mat2[10][10];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mat2[j][i]=mat1[i][j];
        }
    }
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d\t", mat2[i][j]);
        }
        printf("\n");
    }
    return 1;
}