#include <stdio.h>

struct student
{
    char name[20];
    int rollno;
    int marks[5];
    int total;
};

int main()
{
    struct student s[10];
    int i, j;
    int max, min;
    int topper = 0, lowestmarkstudent = 0;

    for (i = 0; i < 10; i++)
    {
        printf("\nEnter name of student %d: ", i + 1);
        scanf("%s", s[i].name);
        printf("Enter roll number: ");
        scanf("%d", &s[i].rollno);
    }

    for (i = 0; i < 10; i++)
    {
        s[i].total = 0;
        printf("Enter marks of 5 subjects for %s:\n", s[i].name);
        for (j = 0; j < 5; j++)
        {
            scanf("%d", &s[i].marks[j]);
            s[i].total += s[i].marks[j];
        }

        if (i == 0)
        {
            max = s[i].total;
            min = s[i].total;
            topper = i;
            lowestmarkstudent = i;
        }
        else
        {
            if (s[i].total > max)
            {
                max = s[i].total;
                topper = i;
            }

            if (s[i].total < min)
            {
                min = s[i].total;
                lowestmarkstudent = i;
            }
        }
    }

    printf("\nTopper is: %s with %d marks\n", s[topper].name, s[topper].total);
    printf("Lowest marks student is: %s with %d marks\n", s[lowestmarkstudent].name, s[lowestmarkstudent].total);

    return 0;
}
