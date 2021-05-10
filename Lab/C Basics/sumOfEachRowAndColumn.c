#include <stdio.h>
#include <string.h>
#include <math.h>

int r1, c1, i = 0, j = 0;
int mat1[20][20];

int main()
{
    scanf("%d %d", &r1, &c1);
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat1[i][j]);
        }
    }
    int sum;
    for(i=0;i<r1;i++){
        sum=0;
        for(j=0;j<c1;j++){
            sum+=mat1[i][j];
        }
        printf("Sum of %d index row is %d\n",i,sum);
    }
    return 1;
}