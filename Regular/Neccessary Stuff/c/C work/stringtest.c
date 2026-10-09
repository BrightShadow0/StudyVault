#include <stdio.h>
#include <string.h>
int main() {
    char s[100], temp;
    int i, len;
    scanf("%99s", s);
    len = strlen(s);
    for (i = 0; i < len / 2; i++) {
        temp = s[i];
        s[i] = s[len - 1 - i];
        s[len - 1 - i] = temp;
    }
    printf("Reversed string: %s", s);
    return 0;
}