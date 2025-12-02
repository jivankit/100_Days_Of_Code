// Find the digit that occurs most times in a number
#include <stdio.h>
int main() {
    int n, d, freq[10] = {0}, max = 0, digit;
    scanf("%d", &n);
    if(n < 0) n = -n;
    while(n > 0) {
        d = n % 10;
        freq[d]++;
        n /= 10;
    }
    for(int i = 0; i < 10; i++)
        if(freq[i] > max) {
            max = freq[i];
            digit = i;
        }
    printf("%d", digit);
    return 0;
}