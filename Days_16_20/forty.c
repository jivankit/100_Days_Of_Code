//Write a program to find the 1’s complement of a binary number and print it.

#include <stdio.h>

int main(){
    long long binary, temp;
    int remainder, onesComplement = 0, place = 1;

    printf("Enter a binary number: ");
    scanf("%lld", &binary);

    temp = binary;
    while (temp != 0)
    {
        remainder = temp % 10;
        if (remainder == 0)
            onesComplement += 1 * place;
        else
            onesComplement += 0 * place;
        temp /= 10;
        place *= 10;
    }

    printf("1's Complement: %d\n", onesComplement);
    return 0;
}