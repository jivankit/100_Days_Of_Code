#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], str2[100], temp[200];
    int len1 = 0, len2 = 0;

    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);

    while(str1[len1] != '\0' && str1[len1] != '\n') len1++;
    while(str2[len2] != '\0' && str2[len2] != '\n') len2++;

    if(len1 != len2) {
        printf("Not rotation\n");
        return 0;
    }

    strcpy(temp, str1);
    strcat(temp, str1);

    if(strstr(temp, str2) != NULL)
        printf("Rotation\n");
    else
        printf("Not rotation\n");

    return 0;
}
