//Addition of two matrix
/*IPS1
Add two matrices using function. 

Input format:

Enter the number of rows and columns of first matrix

Enter the number of rows and columns of second matrix

Enter the elements of first matrix

Enter the elements of second matrix

Output format:

Print the resultant matrix (if addition is possible)

If addition is not possible, print the message "Matrix Addition not possible"*/

#include <stdio.h>
#include <string.h>
#include <math.h>
int r1, c1;
int r2, c2;
int i = 0, j = 0;
int r, c;
int mat[20][20];
int mat1[10][10];
int mat2[10][10];
int a,b;

void display()
{

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            printf("%d ", mat[i][j]);
        }
        printf("\n");
    }
}
void add_matrix()
{

    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            mat[i][j] = mat1[i][j] + mat2[i][j];
        }
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
    for (i = 0; i < r1; i++)
    {
        for (j = 0; j < c1; j++)
        {
            scanf("%d", &mat2[i][j]);
        }
    }

    if (r1 == r2 && c1 == c2)
    {
        r = r1;
        c = c1;
        add_matrix();
        display();
    }
    else
    {
        printf("Matrix Addition not possible");
    }

    return 1;
}