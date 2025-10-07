//Write a program to find the product of odd digits of a number.


#include <stdio.h>
int main()
{
    int num, product = 1, rem, hasOdd = 0;
    printf("Enter a positive integer: ");
    scanf("%d", &num);
    while (num != 0)
    {
        rem = num % 10;
        if (rem % 2 != 0)
        {
            product *= rem;
            hasOdd = 1;
        }
        num /= 10;
    }
    if (hasOdd)
        printf("Product of odd digits: %d\n", product);
    else
        printf("No odd digits found.\n");
    return 0;
}