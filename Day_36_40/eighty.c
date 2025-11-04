//Rotate an array to the right by k positions.


#include <stdio.h>

void rotate(int arr[], int n, int k) {
    k %= n;  // handle k > n
    int temp[k];
    for (int i = 0; i < k; i++)
        temp[i] = arr[n - k + i];
    for (int i = n - 1; i >= k; i--)
        arr[i] = arr[i - k];
    for (int i = 0; i < k; i++)
        arr[i] = temp[i];
}

int main() {
    int n, k;
    printf("Enter size of array: ");
    scanf("%d", &n);
    int arr[n];
    printf("Enter array elements: ");
    for (int i = 0; i < n; i++)
        scanf("%d", &arr[i]);
    printf("Enter k: ");
    scanf("%d", &k);

    rotate(arr, n, k);

    printf("Rotated array: ");
    for (int i = 0; i < n; i++)
        printf("%d ", arr[i]);
    printf("\n");

    return 0;
}
