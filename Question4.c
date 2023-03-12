#include <stdio.h>
void main()
{
    int a, b;
    char op;
    printf("Enter any two number: \n");
    scanf("%d %d", &a, &b);
    printf("Enter operation of your choice: \n");
    scanf("%c", &op);
    switch (op)
    {
    case '+':
        printf("The Sum Is %d", a + b);
        break;
    case '-':
        printf("The Substraction is %d", a - b);
        break;
    case '*':
        printf("The Multiplication is %d", a * b);
        break;
    case '/':
        printf("The Division is %d", a / b);
        break;
    default:
        printf("Not Valid");
    }

}
