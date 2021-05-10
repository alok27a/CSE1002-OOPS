#include <stdio.h>
#include <string.h>
#include <math.h>
#include <stdlib.h>

struct room
{
    struct det{
    float vol[10];
    float dens[10];
    float heat[10];
    }d;
}r[10];

int main()
{
    int i=0, j;

        for(j=0;j<6;j++)
        {
            scanf("%f",&r[i].d.vol[j]);
            i++;
        }
        for(j=0;j<6;j++)
        {
            scanf("%f",&r[i].d.dens[j]);
            i++;
        }
        for(j=0;j<6;j++)
        {
            scanf("%f",&r[i].d.heat[j]);
            i++;
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
       r[rn].d.vol[wall]+=(100*rn);
    }
    void display(){
    mass=(r[rn].d.dens[wall])*(r[rn].d.vol[wall]);
    th_mass=(mass)*(r[rn].d.heat[wall]);
    printf("%f\n", th_mass);//Thermal mass
    printf("%f\n", mass);    //mass}
    return 1;
}