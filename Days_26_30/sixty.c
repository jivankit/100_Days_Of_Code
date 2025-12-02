// Count positive, negative, and zero elements in an array
#include <stdio.h>
int main() {
    int n, i, a[100], pos = 0, neg = 0, zero = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &a[i]);
        if(a[i] > 0) pos++;
        else if(a[i] < 0) neg++;
        else zero++;
    }
    printf("Positive=%d Negative=%d Zero=%d", pos, neg, zero);
    return 0;
}
