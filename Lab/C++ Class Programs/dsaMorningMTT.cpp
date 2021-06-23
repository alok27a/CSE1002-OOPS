#include <stdio.h>
int queue[100], front = -1, rear = -1, n, choice;
void enqueue(int x);
void dequeue();
void display();
int duplicate(int x);

int main()
{
    int x;
    printf("Enter max size of Queue: ");
    scanf("%d", &n);
    while (choice != 4)
    {
        printf("1. Enqueue\n");
        printf("2. Dequeue\n");
        printf("3. Display\n");
        printf("4. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
        {
            printf("Enter element: ");
            scanf("%d", &x);
            if (duplicate(x) == 0)
            {
                printf("Duplicate found ie element not inserted\n");
            }
            else
            {
                enqueue(x);
            }
            break;
        }
        case 2:
        {
            dequeue();
            break;
        }
        case 3:
        {
            display();
            break;
        }
        case 4:
        {
            printf("Exiting....");
            break;
        }
        default:
        {
            printf("Invalid Choice\n");
        }
        };
    }
    return 1;
}

void enqueue(int x)
{
    if (rear == n - 1)
    {
        printf("Queue Overflow\n");
    }
    else
    {
        if (rear == -1)
        {
            front = front + 1;
            rear = rear + 1;
            queue[rear] = x;
        }
        else
        {
            rear = rear + 1;
            queue[rear] = x;
        }
    }
}

void dequeue()
{
    if (rear == -1 || front > rear)
    {
        printf("Queue Underflow\n");
    }
    else
    {
        front = front + 1;
    }
}

void display()
{
    for (int i = front; i <= rear; i++)
    {
        printf("%d ", queue[i]);
    }
    printf("\n");
}

int duplicate(int x)
{
    int i;
    for (i = front; i <= rear; i++)
    {
        if (queue[i] == x)
        {
            return 0;
        }
    }
    return 1;
}
