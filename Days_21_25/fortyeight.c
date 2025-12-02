// Print number pattern 1 to 5 in increasing order
#include <stdio.h>
int main() {
    int i, j;
    for(i = 1; i <= 5; i++) {
        for(j = 1; j <= i; j++)
            printf("%d", j);
        printf("\n");
    }
    return 0;
}
