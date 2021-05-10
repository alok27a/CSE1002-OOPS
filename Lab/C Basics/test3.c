#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int n=789;
    n=n%100;
    printf("%d",n);
    n=n/10;
    printf("%d",n);
    return 1;
}