#include <stdio.h>
#include <string.h>

int main()
{
    int a, b,c;
    char ch;
    scanf("%d %c %d", &a, &ch,&b);
    
    switch (ch)
    {
    case '+':
        c=a+b;
        printf("%d",c);
        break;
    case '-':
        c=a-b;
        printf("%d",c);
        break;
    case '*':
        c=a*b;
        printf("%d",c);
        break;
    case '/':
        c=a/b;
        printf("%d",c);
        break;
    default:
        printf("Invalid Input");
        break;
    }

    return 1;
}