// Product of array except self
#include <stdio.h>
int main() {
    int n, nums[100], answer[100], i, j, prod;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        scanf("%d", &nums[i]);
    for(i = 0; i < n; i++) {
        prod = 1;
        for(j = 0; j < n; j++)
            if(i != j) prod *= nums[j];
        answer[i] = prod;
    }
    for(i = 0; i < n; i++) {
        printf("%d", answer[i]);
        if(i != n - 1) printf(" ");
    }
    return 0;
}

