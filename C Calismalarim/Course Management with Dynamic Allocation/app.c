#include <stdio.h>
#include <stdlib.h>
#include <string.h>

#define MAX_NAME_LENGTH 40

struct Course {
    char name[MAX_NAME_LENGTH];
    int weeklyClassCount;
};

void fillCourses(struct Course *courses, int courseCount) {
    for (int i = 0; i < courseCount; i++) {
        printf("Enter details for Course %d:\n", i + 1);
        printf("Name: ");
        scanf("%s", courses[i].name);

        printf("Weekly Class Count: ");
        scanf("%d", &courses[i].weeklyClassCount);
    }
}

void printCourses(struct Course *courses, int courseCount) {
    printf("\nList of courses:\n");
    for (int i = 0; i < courseCount; i++) {
        printf("Course %d:\n", i + 1);
        printf("Name: %s\n", courses[i].name);
        printf("Weekly Class Count: %d\n\n", courses[i].weeklyClassCount);
    }
}

void sortCourses(struct Course *courses, int courseCount) {
    struct Course temp;
    for (int i = 0; i < courseCount - 1; i++) {
        for (int j = 0; j < courseCount - i - 1; j++) {
            if (strcmp(courses[j].name, courses[j + 1].name) > 0) {
                temp = courses[j];
                courses[j] = courses[j + 1];
                courses[j + 1] = temp;
            }
        }
    }
}

int main() {
    int courseCount;
    printf("How many courses do you want to enter?\n");
    scanf("%d", &courseCount);

    struct Course *courses = (struct Course *)malloc(courseCount * sizeof(struct Course));
    if (courses == NULL) {
        printf("Memory allocation failed.\n");
        return 1;
    }

    fillCourses(courses, courseCount);
    sortCourses(courses, courseCount);
    printCourses(courses, courseCount);

    free(courses);

    return 0;
}
