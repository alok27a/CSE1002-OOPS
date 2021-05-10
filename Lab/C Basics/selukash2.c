#include <stdio.h>
#include <string.h>
#include <math.h>

struct det{
    int grade;
    int attend;
    int sport;
}s;

int main()
{
    scanf("%d %d %d",&s.grade,&s.attend,&s.sport);
    if((s.grade>=3)&& (s.attend>=90) && (s.sport>=2))
    {
        printf("Excellent");
    }
    else if((s.grade>=3)&& (s.attend>=90) &&(s.sport<2))
    {
        printf("Very Good");
    }
    
    return 1;
}