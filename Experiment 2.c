#include<stdio.h>

int maxsize = 100, top = -1;
int stack[100];
int x, n;

void push(int x)
{
    if(top == maxsize - 1)
    {
        printf("Stack is Full\n");
    }
    else
    {
        top++;
        stack[top] = x;
        printf("%d inserted into the stack.\n", x);
    }
}

int pop()
{
    if(top == -1)
    {
        printf("Stack is Empty\n");
        return -1;
    }
    else
    {
        x = stack[top];
        top--;
        return x;
    }
}

int peek()
{
    if(top == -1)
    {
        printf("Stack is Empty\n");
        return -1;
    }
    else
    {
        return stack[top];
    }
}

void display()
{
    if(top == -1)
    {
        printf("Stack is Empty\n");
    }
    else
    {
        printf("\nStack:\n");
        for(int i = top; i >= 0; i--)
        {
            printf("| %d |\n", stack[i]);
            printf("|___|\n");
        }
        printf("  Top\n");
    }
}

int main()
{
    do
    {
        printf("\n----- STACK MENU -----\n");
        printf("1. Push\n");
        printf("2. Pop\n");
        printf("3. Peek\n");
        printf("4. Display\n");
        printf("5. Exit\n");
        printf("Enter your choice: ");
        scanf("%d", &n);

        switch(n)
        {
            case 1:
                printf("Enter element: ");
                scanf("%d", &x);
                push(x);
                break;

            case 2:
                x = pop();
                if(x != -1)
                    printf("Popped Element = %d\n", x);
                break;

            case 3:
                x = peek();
                if(x != -1)
                    printf("Top Element = %d\n", x);
                break;

            case 4:
                display();
                break;

            case 5:
                printf("Program Ended.\n");
                break;

            default:
                printf("Invalid Choice!\n");
        }

    } while(n != 5);

    return 0;
}
