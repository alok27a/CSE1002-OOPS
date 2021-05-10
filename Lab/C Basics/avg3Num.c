#include<stdio.h>
#include <string.h>
int main(){
    float a,b,c,avg;
    scanf("%f %f %f",&a,&b,&c);
    avg=(a+b+c)/3;
    printf("%.2f",avg);
    return 1;
}