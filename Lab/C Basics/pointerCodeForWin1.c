#include <stdio.h>
#include <string.h>
#include <math.h>
 
int main()
{
    int num1,num2;
    scanf("%d %d",&num1,&num2);
    int *ptr1,*ptr2;
    ptr1=&num1;
    ptr2=&num2;
    printf("%d\n",(*ptr1)+(*ptr2));
    printf("%d\n",(*ptr1)-(*ptr2));
    printf("%d\n",(*ptr1)*(*ptr2));
    printf("%d\n",(*ptr1)/(*ptr2));
    return 1;
}