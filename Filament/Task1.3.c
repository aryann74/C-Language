#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], sub[100], newSub[100];

    printf("Enter a string: ");
    gets(str1);

    printf("Enter a substring to replace: ");
            gets(sub);
            printf("Enter a replacement string: ");
            gets(newSub);
            char *start = strstr(str1, sub);
            while (start != NULL) {
                int index = start - str1;
                strcpy(str1 + index, newSub);
                strcpy(str1 + index + strlen(newSub), start + strlen(sub));
                start = strstr(str1, sub);
            }
        printf("String after replacing '%s' with '%s': %s\n", sub, newSub, str1);

    return 0;

}