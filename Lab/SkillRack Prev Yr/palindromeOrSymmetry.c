#include <stdio.h>
#include <string.h>
#include <math.h>

int palindrome(char s[])
{
    int flag=1,i=0;
    for(i=0;i<strlen(s)/2;i++)
    {
        if(s[i]==s[strlen(s)-1-i])
        {
            flag=1;
        }
        else{
            flag=0;
            break;
        }
    }
    if(flag==1)
    {
        return 1;
    }
    else{
        return 0;
    }

}

int symmetry(char a[])
{
    int n,i;
    n = strlen(a);
    if(n%2==0)
    {
        for(i=0;i<n/2;i++)
        {
            if (a[i] != a[(n/2)-1+i])
                return 0;
            else
            return 1;
        }
        
    }
    else
    {
        for(i=0;i<n/2;i++)
            {if (a[i] != a[(n/2)+i])
                return 0;
            else 
            return 1;
            }
        
    }

}



int main()
{
    char str[50];
    scanf("%s",str);
    int a,b;
    a=palindrome(str);
    b=symmetry(str);
    if(a==1 && b==1)
    {
        printf("Both property");
    }
    else if(a==1 && b==0)
    {
        printf("Palindrome");
    }
    else if(a==0 && b==1)
    {
        printf("Symmetry");
    }
    else{
        printf("No property");
    }

    
    return 1;
}