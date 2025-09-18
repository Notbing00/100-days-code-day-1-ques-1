//Q12: Write a program to input an integer and check whether it is positive, negative or zero using nested if–else.
#include <stdio.h>
int main()
{
    int n;
    printf ("enter a no.\n");
    scanf ("%d",&n);
    if(n>0)
    {
        printf ("its positive no\n");
    }
    else if(n<0)
    {
        printf ("its a negative no.\n");
    }
    else
    {
        printf ("zero");
    }
    return 0;
}