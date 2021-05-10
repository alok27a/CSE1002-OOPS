#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    float fee,mark;
    char grad[50];
    scanf("%f %f",&fee,&mark);
    scanf("%s",grad);
    float stp;
    int a=strcmp(grad,"yes");
    int b=strcmp(grad,"no");
    if(fee>0 && (mark>0 && mark<100) && (a==0 || b==0))
    {
        if(mark>=90 && a==0)
        {
            stp=fee-(fee*30)/100;
            printf("%.2f",stp);
        }
        else if(mark>=90 && b==0)
        {
            stp=fee-(fee*20)/100;
            printf("%.2f",stp);
        }
        else if(mark>=85 && a==0)
        {
            stp=fee-(fee*10)/100;
            printf("%.2f",stp);
        }
    }
    else
    {
        printf("Invalid input");
    }
    return 1;
}