//Q150: Use pointer to struct to modify and display data using -> operator.

/*
Sample Test Cases:
Input 1:
Student pointer modifying values: John 106 91
Output 1:
Modified Data: Name: John | Roll: 106 | Marks: 91

*/
#include <stdio.h>

struct Student {
    char name[30];
    int roll;
    int marks;
};

int main() {
    struct Student s;
    struct Student *p = &s;

    printf("Enter name roll marks: ");
    scanf("%s %d %d", p->name, &p->roll, &p->marks);

    printf("Modified Data: Name: %s | Roll: %d | Marks: %d\n",
           p->name, p->roll, p->marks);

    return 0;
}
