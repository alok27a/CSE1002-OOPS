//Print all even number from 2 to 100
#include <stdio.h>
#include <string.h>
#include <math.h>

int main()
{
    int n = 2;
    // Using for loop
    /*for (n = 2; n < 101; n++)
    {
        if (n % 2 == 0)
        {
            printf("%d\t", n);
        }
    }*/
    //Using while loop
    /*while(n<=100){
        if(n%2==0){
            printf("%d\t",n);
        }
        n++;
    }*/
    //Using do.....while loop
    do{
        if(n%2==0){
            printf("%d\t",n);
        }
        n++;

    }while(n<=100);

    return 1;
}