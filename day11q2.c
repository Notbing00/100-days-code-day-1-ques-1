//Q22: Write a program to find profit or loss percentage given cost price and selling price.
#include <stdio.h>
int main() {
    float CP, SP;
    float amount, percentage;

    printf("Enter Cost Price and Selling Price: ");
    scanf("%f %f", &CP, &SP);

    if (SP > CP) 
    {
        amount = SP - CP;
        percentage = (amount / CP) * 100;
        printf("Profit %.2f%%\n", percentage);
    }
    else if (CP > SP)
     {
        amount = CP - SP;
        percentage = (amount / CP) * 100;
        printf("Loss %.2f%%\n", percentage);
    }
    else 
    {
        printf("No Profit No Loss\n");
    }

    return 0;
}
