#include <stdio.h>
#include <string.h>
#include <math.h>

struct Node
{
    int data;
    Node *next;
};

void insert(Node *root, int item)
{
    Node *ptr, *temp;
    temp =(struct Node*) malloc(sizeof(struct Node));
    temp->data = item;
    temp->next = NULL;

    if (root == NULL)
        root = temp;
    else
    {
        ptr = root;
        while (ptr->next != NULL)
            ptr = ptr->next;

        ptr->next = temp;
    }
}

void display(Node *root)
{
    while (root != NULL)
    {
        printf("%d ", root->data);
        root = root->next;
    }
    printf("NULL");
}
Node *newList(Node *root1, Node *root2)
{
    Node *ptr1 = root1, *ptr2 = root2;
    Node *root = NULL;

    // While there are nodes left
    while (ptr1 != NULL)
    {

        // Maximum node at current position
        int currMax;

        if (ptr1->data % 5 == 0)
        {
            currMax = ptr1->data;
        }
        else if (ptr2->data % 5 == 0)
        {
            currMax = ptr2->data;
        }
        if (root == NULL)
        {
            Node *temp = new Node;
            temp->data = currMax;
            temp->next = NULL;
            root = temp;
        }

        else
        {
            insert(root, currMax);
        }
        ptr1 = ptr1->next;
        ptr2 = ptr2->next;
    }
    return root;
}

int main()
{
    Node *root1 = NULL, *root2 = NULL, *root = NULL;

    // First linked list
    insert(root1, 5);
    insert(root1, 2);
    insert(root1, 30);
    insert(root1, 8);

    // Second linked list
    insert(root2, 1);
    insert(root2, 20);
    insert(root2, 4);
    insert(root2, 5);

    // Generate the new linked list
    // and get its head
    root = newList(root1, root2);

    // Display the nodes of the generated list
    display(root);

    return 1;
}