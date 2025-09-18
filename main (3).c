// Write a program to input two numbers and display their sum, difference, product, and quotient.
#include <stdio.h>
int main ()
{
    int a,b,sum,diff,prod,quot;
    printf ("enter two no.\n");
    scanf ("%d %d",&a,&b);
    sum=a+b;
    diff=a-b;
    prod=a*b;
    quot=a/b;
    printf ("sum=%d\n, difference=%d\n, product=%d\n, quotient=%d\n",sum,diff,prod,quot);
    return 0;
}