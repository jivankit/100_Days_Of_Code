// Find pivot integer for 1 to n
#include <stdio.h>
int main() {
    int n, i, left = 0, total = 0;
    scanf("%d", &n);
    for(i = 1; i <= n; i++)
        total += i;
    for(i = 1; i <= n; i++) {
        left += i;
        if(left == total - left + i) {
            printf("%d", i);
            return 0;
        }
    }
    printf("-1");
    return 0;
}
