//Write a program to find the LCM of two numbers.


#include <stdio.h>

int main() {
    int num1, num2, lcm;

    printf("Enter two positive integers: ");
    scanf("%d %d", &num1, &num2);

    lcm = (num1 > num2) ? num1 : num2;  
    int step = lcm;

    while (1) {
        if (lcm % num1 == 0 && lcm % num2 == 0)
            break;
        lcm += step;
    }

    printf("LCM of %d and %d is %d\n", num1, num2, lcm);
    return 0;
}
