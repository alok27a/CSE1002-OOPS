#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct room
{
    float vol[5];
    float dens[5];
    float heat[5];
} * r;

int main()
{
    int i, j;
    r=(struct room *)malloc(3*sizeof(struct room));
    for (j = 0; j < 6; j++)
    {
        scanf("%f", &r->vol[j]);
    }
    for (j = 0; j < 6; j++)
    {
        scanf("%f", &r->dens[j]);
    }
    for (j = 0; j < 6; j++)
    {
        scanf("%f", &r->heat[j]);
    }
    // , &r[i].dens[j], &r[i].heat[j]
    int rn;
    int wall;
    scanf("%d", &rn);
    scanf("%d", &wall);
    float mass ;
    float th_mass;
    if(rn>=0 && rn<=2)
    {       
        r->vol[wall]+=(100*rn);
    }
    mass=(r->vol[wall])*(r->dens[wall]);
    th_mass=(mass)*(r->heat[wall]);

    printf("%f\n", th_mass);//Thermal mass
    printf("%f\n", mass);    //mass
    return 1;
}