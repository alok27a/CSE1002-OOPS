//Number of digits in a number 
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int n;
    scanf("%d",&n);
    int digit=0;
    do{
        n=n/10;
        digit++;

    }while(n>0);
    printf("%d",digit);
    
    return 1;
}