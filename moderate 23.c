#include <stdio.h>
#include <stdlib.h>

struct Subject {
    char name[50];
    int marks;
};

int main() {
    int n, i;
    struct Subject *s;
    printf("Enter the number of subjects: ");
    scanf("%d", &n);
    s = (struct Subject *)malloc(n * sizeof(struct Subject));
    for (i = 0; i < n; i++) {
        printf("Enter the name of subject %d: ", i+1);
        scanf("%s", s[i].name);
        printf("Enter the marks in subject %d: ", i+1);
        scanf("%d", &s[i].marks);
    }
    printf("----------------");
	for (i = 0; i < n; i++) {
        printf("Subject %d: %s\n", i+1, s[i].name);
        printf("Marks: %d\n", s[i].marks);
    }
    return 0;
}
