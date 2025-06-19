#include <stdio.h>
#include "fun.h"
int main()
{
    int num1, num2;
    char name[20];
    printf("Enter your name:\n");
    scanf("%s", name);
    printf("Hello,Mr %s !\n", name);
    add();
    printf("thanks for using our programing sum");
    return 0;
};