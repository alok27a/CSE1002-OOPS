#include <stdio.h>
#include <string.h>
#include <math.h>

void display(int arr[][])
{
    int i = 0, j = 0;
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d", arr[i][j]);
        }
        printf("\n");
    }
}

int main()
{

    int i = 0;
    int j = 0;
    static int r,c;
    scanf("%d %d", &r, &c);
    int arr[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            scanf("%d", &arr[i][j]);
        }
    }
    display(arr);


    return 1;
}