#include <stdio.h>
#include <string.h>
#include <math.h>

struct student{
    char name[50];
    int age;
};

void display(struct student a){
    printf("%s\n",a.name);
    printf("%d",a.age);

}
 
int main()
{
    struct student s;
    scanf("%s",s.name);
    scanf("%d",&s.age);
    display(s);
    return 1;
}

