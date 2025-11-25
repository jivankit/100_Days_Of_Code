// Sum of main diagonal elements
#include <stdio.h>
int main() {
    int n, a[100][100], i, j, sum = 0;
    scanf("%d", &n);
    for(i = 0; i < n; i++)
        for(j = 0; j < n; j++)
            scanf("%d", &a[i][j]);
    for(i = 0; i < n; i++)
        sum += a[i][i];
    printf("%d", sum);
    return 0;
}
