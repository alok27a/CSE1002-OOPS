#include <stdio.h>
#include <string.h>
#include <math.h>

struct taxi
{
    char car_id[100];
    float no_seats;
    float ticket;
    float revenue;
} s[5];

int main()
{
    int i;
    float sum = 0.00;
    for (i = 0; i < 5; i++)
    {
        scanf("%s %f %f", s[i].car_id, &s[i].no_seats, &s[i].ticket);
        int rev = (s[i].no_seats) * (s[i].ticket);
        rev = rev - (rev * 0.12) - (rev * 0.10) - (rev * 0.18);
        s[i].revenue = rev;
    }
    for (i = 0; i < 5; i++)
    {
        printf("%s %f\n", s[i].car_id, s[i].revenue);
        sum+=s[i].revenue;
    }
    printf("%f",sum);
    return 1;
}