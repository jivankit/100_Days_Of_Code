// Find majority element in an array
#include <stdio.h>
int main() {
    int n, nums[100], i, j, count, majority = -1;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    for(i = 0; i < n; i++) {
        count = 0;
        for(j = 0; j < n; j++)
            if(nums[j] == nums[i])
                count++;
        if(count > n / 2) {
            majority = nums[i];
            break;
        }
    }
    printf("%d", majority);
    return 0;
}
