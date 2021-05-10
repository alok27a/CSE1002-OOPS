/*7. Write a C program to implement
1. Insertion of an Element into the array (with position)
2. Delete an element from the array (With position)
3. Find or Search an Element in the given array.
i) Binary search ii) Linear search
4. Update the k th element in the given array (given position)
5. Display the next and previous element based on the position given.*/
#include <stdio.h>
#include <string.h>
#include <math.h>

int arr[50], new_arr[50], i = 0, n, pos, num, ind, choice, arr_del[50], x, y, update_arr[50],result1,ind1;

void insert()
{
    printf("Enter the position of the element to be inserted\n");
    scanf("%d", &pos);
    printf("Enter the element to be inserted\n");
    scanf("%d", &num);
    ind = --pos;
    for (i = 0; i < n + 1; i++)
    {
        if (i < ind)
        {
            new_arr[i] = arr[i];
        }
        else if (i == ind)
        {
            new_arr[i] = num;
        }
        else
        {
            new_arr[i] = arr[i - 1];
        }
    }
    printf("The elements of the array after Inserting is \n");
    for (i = 0; i < n + 1; i++)
    {
        printf("%d ", new_arr[i]);
    }
}
int binarySearch(int arr[], int l, int r, int x)
{
    if (r >= l)
    {
        int mid = l + (r - l) / 2;

        if (arr[mid] == x)
            return mid;

        if (arr[mid] > x)
            return binarySearch(arr, l, mid - 1, x);

        return binarySearch(arr, mid + 1, r, x);
    }

    return -1;
}
int linearsearch(int arr[], int n, int x)
{
    int i;
    for (i = 0; i < n; i++)
        if (arr[i] == x)
            return i;
    return -1;
}

void delete ()
{
    printf("Enter the position of the element to be deleted\n");
    scanf("%d", &pos);
    ind1 = --pos;
    for (i = 0; i < n + 1; i++)
    {
        if (i < ind1)
        {
            arr_del[i] = arr[i];
        }
        else if (i == ind1)
        {
            continue;
        }
        else
        {
            arr_del[i - 1] = arr[i];
        }
    }
    printf("The elements of the array after Deleting is \n");
    for (i = 0; i < n - 1; i++)
    {
        printf("%d ", arr_del[i]);
    }
}
void update()
{
    printf("Enter the position of the element to be updated\n");
    scanf("%d", &pos);
    printf("Enter the element to be updated\n");
    scanf("%d", &num);
    ind = --pos;
    for (i = 0; i < n + 1; i++)
    {
        if (i < ind)
        {
            update_arr[i] = arr[i];
        }
        else if (i == ind)
        {
            update_arr[i] = num;
        }
        else
        {
            update_arr[i] = arr[i];
        }
    }
    printf("The elements of the array after Inserting is \n");
    for (i = 0; i < n; i++)
    {
        printf("%d ", update_arr[i]);
    }
}
int main()
{
    puts("Enter the number of elements of array\n");
    scanf("%d", &n);
    printf("Enter elements of Array\n");
    for (i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }
    while (choice != 4)
    {
        printf("\nPlease enter your choice\n");
        printf("1.Insert\n2.Delete\n3.Search Using Binary Search\n4.Search Using Linear Search\n5.Update an element\n6.Exit\n");
        scanf("%d", &choice);
        switch (choice)
        {
        case 1:
            insert();
            break;
        case 2:
            delete ();
            break;
        case 3:
            printf("Enter the element to be searched\n");
            scanf("%d", &x);
            int result = binarySearch(arr, 0, n - 1, x);
            (result == -1) ? printf("Element is not present in array")
                           : printf("Element is present at index %d",
                                    result);
            break;
        case 4:
            printf("Enter element to be searched\n");
            scanf("%d",&y);
            result1 = linearsearch(arr, n-1, y);
            (result1 == -1)
                ? printf("Element is not present in array")
                : printf("Element is present at index %d", result);
            break;
        case 5:
            update();
            break;
        case 6:
            printf("Exiting...");
            break;
        default:
            printf("Invalid Input");
            break;
        }
    }

    return 1;
}