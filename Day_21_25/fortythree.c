// Check if a number is a strong number
#include <stdio.h>
int main() {
    int n, temp, sum = 0, i, fact, d;
    scanf("%d", &n);
    temp = n;
    while (temp > 0) {
        d = temp % 10;
        fact = 1;
        for (i = 1; i <= d; i++)
            fact *= i;
        sum += fact;
        temp /= 10;
    }
    if (sum == n)
        printf("Strong");
    else
        printf("Not Strong");
    return 0;
}
