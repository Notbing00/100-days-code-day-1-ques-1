// Q147: Store employee data in a binary file using fwrite() and read using fread().

/*
Sample Test Cases:
Input 1:
Employee details entered and stored in file.
Output 1:
Displays employee data read from file.

*/
#include <stdio.h>
#include <stdlib.h>

struct Employee {
    int id;
    char name[30];
    float salary;
};

int main() {
    struct Employee e1, e2;
    FILE *fp;

    fp = fopen("emp.dat", "wb");
    if (fp == NULL) 
    {
        printf("File error\n");
        return 1;
    }
    printf("Enter ID: ");
    scanf("%d", &e1.id);
    printf("Enter Name: ");
    scanf("%s", e1.name);
    printf("Enter Salary: ");
    scanf("%f", &e1.salary);
    fwrite(&e1, sizeof(e1), 1, fp);
    fclose(fp);
    fp = fopen("emp.dat", "rb");
    if (fp == NULL) {
        printf("File read error\n");
        return 1;
    }

    fread(&e2, sizeof(e2), 1, fp);
    fclose(fp);

    printf("\n--- Employee Data from File ---\n");
    printf("ID: %d\n", e2.id);
    printf("Name: %s\n", e2.name);
    printf("Salary: %.2f\n", e2.salary);

    return 0;
}
