#include <stdio.h>
#include <string.h>
void bubbleSort(char names[][20], int);
int main()
{
    int n;
    printf("Enter number of students : \n");
    scanf("%d", &n);
    char names[n][20];
    for (int i = 0; i < n; i++)
    {
        scanf("%s", names[i]);
    }
    int flag = 1;

    for (int i = 0; i < n; i++)
    {
        for (int j = i + 1; j < n; j++)
        {
            if (strcmp(names[i], names[j]) == 0)
            {
                flag = 0;
                break;
            }
        }
    }
    if (flag == 1)
    {

        bubbleSort(names, n);

        for (int i = 0; i < n; i++)
        {
            printf("%s", names[i]);
            printf("\n");
        }
    }
    else
    {
        printf("Register Number are not unique");
    }
}

void bubbleSort(char name[][20], int n)
{
    char temp[50];
    int i, j;
    for (i = 1; i <= n; i++)
    {
        for (j = 0; j <= n - i; j++)
        {
            if (strcmp(name[j], name[j + 1]) > 0)
            {
                strcpy(temp, name[j]);
                strcpy(name[j], name[j + 1]);
                strcpy(name[j + 1], temp);
            }
        }
    }
}
