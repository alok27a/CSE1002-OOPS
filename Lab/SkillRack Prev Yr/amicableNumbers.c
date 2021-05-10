/*Two numbers are said to be amicable if the sum of proper divisors of one number plus 1, 
is equal to the other number. All divisors of a number other than 1 and itself, are called proper divisors. 
For example, the numbers 220 and 284 are amicable as the sum of proper divisors of 220 (i.e.) 1, 2, 4, 5, 10, 11, 20, 22, 44, 55 and 110
 is equal to 284 and sum of proper divisors of 284 (i.e.) 1, 2, 4, 71 and 142 is 220.
  Given two numbers, write an algorithm and the subsequent Python code to Print Yes if the given two numbers are amicable.
   Print ‘No’ if the given numbers are not amicable. Check for boundary conditions and print 'Invalid input' for wrong input.
    Write appropriate functions for accomplishing the task.
*/

#include <stdio.h>
#include <string.h>
#include <math.h>

void amicable(int n1, int n2,int s1,int s2)
{
    if(s1==n2 && s2==n1)
    {
        printf("Yes");
    }
    else{
        printf("No");
    }


}
int main()
{
    int n1,n2;
    scanf("%d %d",&n1,&n2);
    int t1=n1;
    int t2=n2;
    int i,j;
    int sum1,sum2;
    for(i=2;i<=n1/2;i++)
    {
        if(n1%i==0)
        {
            sum1+=i;
        }
    }
    for(i=2;i<=n2/2;i++)
    {
        if(n2%i==0)
        {
            sum2+=i;
        }
    }
  
    amicable(t1,t2,sum1+1,sum2+1);
    
    return 1;
}