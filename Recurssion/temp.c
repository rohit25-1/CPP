#include <stdio.h>
#include <string.h>

// struct student
// {

//     int roll_no;
//     char name[100];
//     int marks[2];
// };

// void input(struct student *ob)
// {
//     scanf("%d", &ob->roll_no);
//     scanf("%s", ob->name);
//     for (int i = 0; i < 2; i++)
//         scanf("%d", &ob->marks[i]);
// }
// void print(struct student *ob)
// {
//     printf("%d\n", ob->roll_no);
//     printf("%s\n", ob->name);
//     for (int i = 0; i < 2; i++)
//         printf("%d\n", ob->marks[i]);
// }
int main()
{
    char name[10][100];
    int usn[10];
    char course[10][10];
    int marks[10][6];
    char grade[10];
    char *nameptr[10], *courseptr[10], *gradeptr = grade;
    int *usnptr = usn, *marksptr[10];
    for (int i = 0; i < 10; i++)
    {
        nameptr[i] = &name[i][0];
        courseptr[i] = &course[i][0];
        marksptr[i] = &marks[i][0];
    }

    for (int i = 0; i < 2; i++)
    {
        scanf("%s", nameptr[i]);
    }
    printf("%s", *nameptr[0]);
}