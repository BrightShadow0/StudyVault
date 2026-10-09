#include <stdio.h>
#include <string.h>
int main() {
    char str1[100], str2[50];
    fgets(str1, sizeof(str1), stdin);
    fgets(str2, sizeof(str2), stdin);
    str1[strcspn(str1, "\n")] = '\0';
    str2[strcspn(str2, "\n")] = '\0';
    strcat(str1, str2);
    fputs(str1, stdout);
    return 0;
}