// Ceil of x in sorted array
#include <stdio.h>
int main() {
    int n, arr[100], x, i, ceil_index = -1;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    scanf("%d", &x);
    for(i = 0; i < n; i++) {
        if(arr[i] >= x) {
            ceil_index = i;
            break;
        }
    }
    printf("%d", ceil_index);
    return 0;
}
