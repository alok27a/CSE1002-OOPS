//Sum of all numbers from 1 to 20
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int i=1;
    int sum=0;
    for(i=1;i<=20;i++){
        sum+=i;
    }
    printf("%d",sum);

    
    return 1;
}