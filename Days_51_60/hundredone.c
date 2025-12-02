// First and last occurrence of target in sorted array
#include <stdio.h>
int main() {
    int n, nums[100], target, i, first = -1, last = -1;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    scanf("%d", &target);
    for(i = 0; i < n; i++) {
        if(nums[i] == target) {
            if(first == -1) first = i;
            last = i;
        }
    }
    printf("%d %d", first, last);
    return 0;
}
