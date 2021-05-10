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
    int count=0;
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            if(mat1[i][j]==0){
                count++;
            }
        }
    }
    if(count>=(r1*c1)/2){
        printf("Sparse Matrix");
    }
    else{
        printf("Not a sparse matrix");
    }

    return 1;
}