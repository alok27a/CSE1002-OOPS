//Factorial of a number using for loop
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    int i=1,fact=1;
    for(i=1;i<=n;i++){
        fact*=i;
    }
    printf("%d",fact);
    
    return 1;
}