#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int n,m,i,j;
    scanf("%d %d",&n,&m);
    int large,small;
    if(m>n)
    {
        large=m;
        small=n;


    }
    else
    {
        large=n;
        small=m;
    }
    char mat[200][200];
    for(i=0;i<n;i++)
    {
        for(j=0;j<m;j++)
        {
            scanf("%c",&mat[i][j]);
        }
    }
    char p[100];
    
    
    return 1;
}