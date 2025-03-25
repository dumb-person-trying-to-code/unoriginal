#include "stdio.h"
#include "math.h"
void main()
{
    float M_PI;
    M_PI=3.14159265358979323846;
    float r,cv,dt;
    printf("\nr=");
    scanf("%f",&r);
    cv=2*M_PI*r;dt=M_PI*r*r;
    printf("\ncv=%0.2f\ndt=%0.2f",cv,dt);
    getch();
}