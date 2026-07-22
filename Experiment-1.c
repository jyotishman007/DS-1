#include<stdio.h>

void main()
{
    int n, i, x, count = 0, firstPosition = -1, arr[100];



    printf("Enter the number of elements (max 100): ");
    scanf("%d", &n);

    printf("Enter %d elements:\n", n);
    for(i = 0; i < n; i++)
    {
        scanf("%d", &arr[i]);
    }

    printf("Enter the number to find: ");
    scanf("%d", &x);

    for(i = 0; i < n; i++)
    {
        if(arr[i] == x)
        {
            count++;
            if(firstPosition == -1)
            {
                firstPosition = i;
            }
        }
    }

    printf("Number of occurrences of %d: %d\n", x, count);

    if(firstPosition != -1)
    {
        printf("First occurrence is at index: %d\n", firstPosition);
    }
    else
    {
        printf("%d not found in the array.\n", x);
    }

    
}
// SEcttion 2
#include <stdio.h>

#define Max 10

int main()
{
    int n;
    int Stack[Max];
    int top = -1;
    int i;

    printf("Enter the Number of Elements: ");
    scanf("%d", &n);

    if (top == (Max - 1))
    {
        printf("Stack is full\n");
    }
    else
    {
        top++;
        Stack[top] = n;  
        printf("Element %d pushed successfully.\n", Stack[top]);
    }

    return 0;
}
