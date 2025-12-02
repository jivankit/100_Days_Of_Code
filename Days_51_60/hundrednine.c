// Maximum sum of subarrays of size k
#include <stdio.h>
int main() {
    int n, arr[100], k, i, j, sum, max = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &k);
    for(i = 0; i <= n - k; i++) {
        sum = 0;
        for(j = 0; j < k; j++)
            sum += arr[i + j];
        if(i == 0 || sum > max) max = sum;
    }
    printf("%d", max);
    return 0;
}
