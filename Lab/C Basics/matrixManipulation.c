#include <stdio.h>
#include <string.h>

int main()
{
    int r1, c1;
    int r2, c2;
    int i, j;
    scanf("%d %d", &r1, &c1);
    int mat1[r1][c1];
    scanf("%d %d", &r2, &c2);
    int mat2[r2][c2];
    if (r1 == r2 && c1 == c2)
    {
        for (i = 0; i < r1; i++)
        {
            for (j = 0; j < c1; j++)
            {
                scanf("%d", &mat1[i][j]);
            }
        }
        
        int mat2[r2][c2];
        for (i = 0; i < r2; i++)
        {
            for (j = 0; j < c2; j++)
            {
                scanf("%d", &mat2[i][j]);
            }
        }
        int mat[r1][c1];
        for(i=0;i<r1;i++){
            for(j=0;j<c1;j++){
                mat[i][j]=mat1[i][j]+mat2[i][j];
            }
        }
    }

    return 1;
}