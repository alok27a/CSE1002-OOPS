#include <stdio.h>
#include <iostream>

using namespace std;

int main()
{
    int r, c;
    cin >> r;
    cin >> c;
    int i = 0, j = 0;
    int mat[r][c];
    for (i = 0; i < r; i++)
    {
        for (j = 0; j < c; j++)
        {
            cin>>mat[i][j];
        }
    }
    for(i=0;i<r;i++){
        for(j=0;j<c;j++){
            cout<<mat[i][j]<<" "<<endl;
        }
    }

    return 1;
}