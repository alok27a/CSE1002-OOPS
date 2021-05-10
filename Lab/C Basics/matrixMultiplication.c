#include <stdio.h>
#include <string.h>
#include <math.h>
int r1, c1, r2, c2;
int mat1[20][20];
int mat2[20][20];
int mul[20][20];
int i = 0, j = 0,k=0;

void mul_matrix()
{
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            mul[i][j] = 0;
            for (k = 0; k < c2; k++)
            {
                mul[i][j] += mat1[i][k] * mat2[k][j];
            }
        }
    }
}
void display(){

 for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c2; j++)
        {
            printf("%d ", mul[i][j]);
        }
        printf("\n");
    }


}
int main()
{
    scanf("%d %d", &r1, &c1);
    scanf("%d %d", &r2, &c2);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    for (i = 0; i < r2; i++)
    {
        for (j = 0; j < c2; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }
    if (r2 == c1)
    {
        mul_matrix();
        display();
    }
    else
    {
        printf("Matrix multiplication not possible");
    }
    return 1;
}