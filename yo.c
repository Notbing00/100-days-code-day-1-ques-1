// Write a program to swap two numbers using a third variable.
#include <stdio.h>
int main ()
{
    int a,b,c;
    printf ("enter two no.\n");
    scanf ("%d %d",&a,&b);
    c=a;
    a=b;
    b=c;
    printf ("swap a =%d\n",a);
    printf ("swap b=%d\n",b);
    return 0;
}