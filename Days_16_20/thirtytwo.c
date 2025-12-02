//Write a program to check if a number is a palindrome.


#include <stdio.h>
int main()
{
    int num, originalNum, reversedNum = 0, rem;
    printf("Enter a number: ");
    scanf("%d", &num);
    originalNum = num;
    while (num != 0)
    {
        rem = num % 10;
        reversedNum = reversedNum * 10 + rem;
        num /= 10;
    }
    if (originalNum == reversedNum)
        printf("%d is a palindrome.\n", originalNum);
    else
        printf("%d is not a palindrome.\n", originalNum);
    return 0;
}
