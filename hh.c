//Write a program to find and display the sum of the first n natural numbers.
#include <stdio.h>
int main ()
{
    int n=1,s=0;
     while (n<=10)
     {
        s=s+n;
        n++;
     }
 printf("sum of natural no.=%d\n",s); 
 return 0;
}
