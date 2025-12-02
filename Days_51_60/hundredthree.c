// Find pivot index of an array
#include <stdio.h>
int main() {
    int n, arr[100], i, total = 0, left = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
        total += arr[i];
    }
    for(i = 0; i < n; i++) {
        if(left == total - left - arr[i]) {
            printf("%d", i);
            return 0;
        }
        left += arr[i];
    }
    printf("-1");
    return 0;
}
