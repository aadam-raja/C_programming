#include <stdio.h>
#include <string.h>
#include <stdlib.h>

#define MAX_USERS 50
#define NUM_QUESTIONS 20
#define MAX_NAME 50

struct User
{
    char name[MAX_NAME];
    int answers[NUM_QUESTIONS];
};

const char *questions[NUM_QUESTIONS] = {
    "On a scale of 1 to 5, how much do you agree that you have actively built or contributed to coding projects?",
    "On a scale of 1 to 5, how much are you aiming to get a remote job in the future?",
    "On a scale of 1 to 5, how strongly do you dream of working at top companies like Google or Microsoft?",
    "On a scale of 1 to 5, how interested are you in exploring Web Development further?",
    "On a scale of 1 to 5, how much do you enjoy working with electronics or hardware components?",
    "On a scale of 1 to 5, how excited are you about becoming an AI engineer in the future?",
    "On a scale of 1 to 5, how open are you to working in a service-based company?",
    "On a scale of 1 to 5, how interested are you in joining or attending a coding bootcamp?",
    "On a scale of 1 to 5, how comfortable are you with mathematics when solving problems?",
    "On a scale of 1 to 5, how interested are you in ethical hacking or cybersecurity?",
    "On a scale of 1 to 5, how regularly do you practice coding on platforms like LeetCode?",
    "On a scale of 1 to 5, how interested are you in pursuing a Master’s degree abroad?",
    "On a scale of 1 to 5, how seriously are you considering or preparing for the GATE exam?",
    "On a scale of 1 to 5, how much are you thinking about switching away from Computer Science Engineering?",
    "On a scale of 1 to 5, how often do you watch tech-related or programming content on YouTube?",
    "On a scale of 1 to 5, how passionate have you always felt about Computer Science?",
    "On a scale of 1 to 5, how much was your choice to study Computer Science influenced by your family?",
    "On a scale of 1 to 5, how interested are you in pursuing a research-based career?",
    "On a scale of 1 to 5, how confident are you that you will get a job before graduating?",
    "On a scale of 1 to 5, how confident do you feel about your coding skills at this stage?"};

void saveUsers(struct User u[], int n)
{
    FILE *f = fopen("users.txt", "w");
    if (!f)
        return; // is this necessary?
    for (int i = 0; i < n; i++)
    {
        fprintf(f, "%s\n", u[i].name);
        for (int j = 0; j < NUM_QUESTIONS; j++)
            fprintf(f, "%d ", u[i].answers[j]);
        fprintf(f, "\n");
    }
    fclose(f);
    printf("User saved successfully.\n");
}

void inputUser(struct User *u, int idx)
{
    printf("Enter name for user %d: ", idx + 1);
    getchar(); // flush newline
    fgets(u->name, MAX_NAME, stdin);
    u->name[strcspn(u->name, "\n")] = '\0';

    for (int i = 0; i < NUM_QUESTIONS; i++)
    {
        printf("%s\nAnswer (1-5): ", questions[i]);
        while (scanf("%d", &u->answers[i]) != 1 || u->answers[i] < 1 || u->answers[i] > 5)
        {
            printf("Invalid input! Enter 1-5: ");
            while (getchar() != '\n')
                ;
        }
    }
}

int loadUsers(struct User u[], int *n)
{
    FILE *f = fopen("users.txt", "r");
    if (!f)
        return *n = 0;
    *n = 0;
    char buf[MAX_NAME];
    while (*n < MAX_USERS && fgets(buf, MAX_NAME, f))
    {
        buf[strcspn(buf, "\n")] = '\0';
        strcpy(u[*n].name, buf);
        int valid = 1;
        for (int i = 0; i < NUM_QUESTIONS; i++)
        {
            if (fscanf(f, "%d", &u[*n].answers[i]) != 1 || u[*n].answers[i] < 1 || u[*n].answers[i] > 5)
            {
                valid = 0;
                break;
            }
        }
        while (fgetc(f) != '\n' && !feof(f))
            ;
        if (valid)
            (*n)++;
    }
    fclose(f);
    return 1;
}

int similarity(struct User a, struct User b)
{
    int score = 0;
    for (int i = 0; i < NUM_QUESTIONS; i++)
        score += (5 - abs(a.answers[i] - b.answers[i]));
    return score;
}

void findMatches(struct User u[], int n, int idx)
{
    struct Match
    {
        int i, s;
    } m[MAX_USERS];
    int c = 0;

    for (int i = 0; i < n; i++)
        if (i != idx)
            m[c++] = (struct Match){i, similarity(u[idx], u[i])};

    for (int i = 0; i < c - 1; i++)
        for (int j = 0; j < c - i - 1; j++)
            if (m[j].s < m[j + 1].s)
            {
                struct Match t = m[j];
                m[j] = m[j + 1];
                m[j + 1] = t;
            }

    FILE *f = fopen("matches.txt", "a");
    if (!f)
        return;

    fprintf(f, "\n--- Matches for %s ---\n", u[idx].name);
    printf("\n--- Matches for %s ---\n", u[idx].name);

    if (c == 0)
    {
        printf("No matches found.\n");
        fprintf(f, "No matches found.\n");
    }
    else
    {
        for (int i = 0; i < (c < 3 ? c : 3); i++)
        {
            float p = (float)m[i].s / (NUM_QUESTIONS * 5) * 100;
            printf("%d. %s (%.1f%%)\n", i + 1, u[m[i].i].name, p);
            fprintf(f, "%d. %s (%.1f%%)\n", i + 1, u[m[i].i].name, p);
        }
    }
    fclose(f);
}

int main()
{
    struct User users[MAX_USERS];
    int n = 0, ch;

    loadUsers(users, &n);
    printf("\nWelcome to Friend Matching Service!\n");
    while (1)
    {
        printf("\nMenu:\n1. Add User & Find Match\n2. Exit\nChoice: ");
        if (scanf("%d", &ch) != 1)
        {
            while (getchar() != '\n')
                ;
            continue;
        }

        if (ch == 1 && n < MAX_USERS)
        {
            inputUser(&users[n], n);
            n++;
            saveUsers(users, n);
            if (n >= 2)
                findMatches(users, n, n - 1);
            else
                printf("Not enough users to find matches.\n");
        }
        else if (ch == 2)
            break;
        else
            printf("Invalid choice or user limit reached.\n");
    }
    return 0;
}