// Write a program to calculate the area and circumference of a circle given its radiusQ4
#include <stdio.h>
int main ()
{
    float r,area,circum;
    printf ("enter the radius of circle\n");
    scanf ("%f",&r);
    area=3.14*r*r;
    printf ("area of circle=%f\n",area);
    circum=2*3.14*r;
    printf ("circumference of circle=%f\n",circum);
    return 0;
}