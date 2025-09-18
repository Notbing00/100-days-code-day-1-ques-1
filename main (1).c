//: Write a program to calculate the area and perimeter of a rectangle given its length and breadth.
#include <stdio.h>
int main()
{
    int l,b,area,perimeter;
    printf ("enter two no.\n");
    scanf ("%d %d",&l,&b);
    area=l*b;
    printf ("area of rectangle=%d\n",area);
    perimeter=2*(l+b);
    printf ("perimeter of rectangle =%d",perimeter);
    return 0;
}
