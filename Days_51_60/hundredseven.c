// Previous greater element for each element (brute force)
#include <stdio.h>
int main() {
    int n, arr[100], i, j, prev;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    for(i = 0; i < n; i++) {
        prev = -1;
        for(j = i - 1; j >= 0; j--) {
            if(arr[j] > arr[i]) {
                prev = arr[j];
                break;
            }
        }
        printf("%d", prev);
        if(i != n - 1) printf(",");
    }
    return 0;
}
