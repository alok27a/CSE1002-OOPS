#include <stdio.h>
#include <string.h>
#include <math.h>
 
int mult(char str[50])
{
    if(strcmp(str,"Black")==0)
    {
        return 1;
    }
    else if(strcmp(str,"Brown")==0)
    {
        return 10;
    }
    else if(strcmp(str,"Red")==0)
    {
        return 100;
    }
    else if(strcmp(str,"Orange")==0)
    {
        return 1000;
    }
    else 
    {
        return 0;
    }

}

int main()
{
    char code[50];
    scanf("%s",code);
    int choice=mult(code);
    if(choice==0)
        printf("Invalid input");
    else
        printf("%d",choice);
    return 1;
}