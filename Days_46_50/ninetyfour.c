// Find the longest word in a sentence
#include <stdio.h>
int main() {
    char str[200], word[100], longest[100];
    int i = 0, j, max_len = 0, len = 0;
    fgets(str, sizeof(str), stdin);

    while(str[i] != '\0' && str[i] != '\n') {
        j = 0;
        while(str[i] != ' ' && str[i] != '\0' && str[i] != '\n')
            word[j++] = str[i++];
        word[j] = '\0';

        len = j;
        if(len > max_len) {
            max_len = len;
            for(j = 0; j <= len; j++)
                longest[j] = word[j];
        }

        if(str[i] == ' ')
            i++;
    }

    printf("%s", longest);
    return 0;
}
