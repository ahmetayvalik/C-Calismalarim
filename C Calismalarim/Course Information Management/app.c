#include <stdio.h>
#include <string.h>

struct Course
{
    char name[40];
    int attendance[40];
    int id;
    int weekly_class_count;
    char instructor[40];
};

void set_name(struct Course *course, const char *name)
{
    strcpy(course->name, name);
}

void set_id(struct Course *course, int id)
{
    course->id = id;
}

void set_weekly_class_count(struct Course *course, int count)
{
    course->weekly_class_count = count;
}

int main()
{
    struct Course course1, course2, course3;

    set_name(&course1, "Software");
    set_id(&course1, 78);
    set_weekly_class_count(&course1, 7);

    set_name(&course2, "Mathematics");
    set_id(&course2, 79);
    set_weekly_class_count(&course2, 4);

    set_name(&course3, "Linear Algebra");
    set_id(&course3, 80);
    set_weekly_class_count(&course3, 2);

    printf("Course 1:\nName: %s\nID: %d\nWeekly Class Count: %d\n\n", course1.name, course1.id, course1.weekly_class_count);
    printf("Course 2:\nName: %s\nID: %d\nWeekly Class Count: %d\n\n", course2.name, course2.id, course2.weekly_class_count);
    printf("Course 3:\nName: %s\nID: %d\nWeekly Class Count: %d\n\n", course3.name, course3.id, course3.weekly_class_count);

    return 0;
}
