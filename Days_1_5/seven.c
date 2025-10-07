//Write a program to swap two numbers without using a third variable.

#include <stdio.h>
int main() {
    int num1, num2;
    printf("Enter two integers: ");
    scanf("%d %d", &num1, &num2);
    num1 = num1 + num2; 
    num2 = num1 - num2;
    num1 = num1 - num2;
    printf("First number: %d\n", num1);
    printf("Second number: %d\n", num2);
    return 0;
