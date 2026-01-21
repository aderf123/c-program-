#include <stdio.h>

int main() {
    char name[50];
    char department[50];
    int age;

    printf("Enter your name: ");
    scanf("%s", name);

    printf("Enter your department: ");
    scanf("%s", department);

    printf("Enter your age: ");
    scanf("%d", &age);

    printf("\nUser Details\n");
    printf("Name: %s\n", name);
    printf("Department: %s\n", department);
    printf("Age: %d\n", age);

    return 0;
}

// ctrl-alt-n