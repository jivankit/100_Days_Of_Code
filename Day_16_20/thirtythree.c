//Write a program to check if a number is an Armstrong number.


#include <stdio.h>
#include <math.h>
int main()
{
    int num, originalNum, rem, n = 0;
    float sum = 0.0;
    printf("Enter an integer: ");
    scanf("%d", &num);
    originalNum = num;
    while (originalNum != 0)
    {
        originalNum /= 10;
        ++n;
    }
    originalNum = num;
    while (originalNum != 0)
    {
        rem = originalNum % 10;
        sum += pow(rem, n);
        originalNum /= 10;
    }
    if ((int)sum == num)
        printf("%d is an Armstrong number.\n", num);
    else
        printf("%d is not an Armstrong number.\n", num);
    return 0;
}