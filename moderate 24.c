#include <stdio.h>

struct student {
    char name[50];
    int age;
};

void display(char name[10],int age) {
    printf("Name: %s\n",name);
    printf("Age: %d\n",age);
}

int main() {
    struct student s1;
    void display(char name[10],int age);
    printf("Enter student's name: ");
    scanf("%s", s1.name);
    printf("Enter student's age: ");
    scanf("%d", &s1.age);
    display(s1.name,s1.age);
    return 0;
}
