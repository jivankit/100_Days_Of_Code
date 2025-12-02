// Maximum element in each subarray of size k (brute force)
#include <stdio.h>
int main() {
    int n, arr[100], k, i, j, max;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    for(i = 0; i <= n - k; i++) {
        max = arr[i];
        for(j = 1; j < k; j++)
            if(arr[i + j] > max) max = arr[i + j];
        printf("%d", max);
        if(i != n - k) printf(" ");
    }
    return 0;
}
