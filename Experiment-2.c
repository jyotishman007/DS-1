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