//Print all odd number from 99 to 11
#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int i=99;
    for(i=99;i>=11;i--){
        if(i%2!=0){
            printf("%d\t",i);
        }
    }
    
    return 1;
}