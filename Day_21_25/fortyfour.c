// Find sum of series 1 + 3/4 + 5/6 + 7/8 + ... up to n terms
#include <stdio.h>
int main() {
    int n, i;
    float sum = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        sum += (2*i - 1.0) / (2*i);
    printf("%.2f", sum);
    return 0;
}
