// Swap first and last digit of a number
#include <stdio.h>
int main() {
    int n, first, last, digits = 0, pow = 1;
    scanf("%d", &n);
    int temp = n;
    last = n % 10;
    while (temp >= 10) {
        temp /= 10;
        pow *= 10;
        digits++;
    }
    first = temp;
    n = n - first * pow - last + last * pow + first;
    printf("%d", n);
    return 0;
}