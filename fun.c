#include <stdio.h>
int add()
{
    int num1, num2, sum;
    printf("Enter two numbers to add: ");
    scanf("%d %d", &num1, &num2);
    sum = num1 + num2;
    printf("The sum is: %d\n", sum);
}