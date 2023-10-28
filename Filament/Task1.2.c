#include <stdio.h>
#include <string.h>

int main() {
    char str1[100], sub[100], newSub[100];
    int choice;

    printf("Enter a string: ");
    gets(str1);

    printf("1. Calculate the length of the string\n");
    printf("2. Convert the string to uppercase\n");
    printf("3. Convert the string to lowercase\n");
    printf("4. Check if the string starts with a specific prefix\n");
    printf("5. Check if the string ends with a specific suffix\n");
    printf("6. Find the index of a substring within the string\n");
    printf("Enter your choice (1-7): ");
    scanf("%d", &choice);
    getchar();

    switch (choice) {
        case 1:
            printf("Length of the string: %d\n", strlen(str1));
            break;

        case 2:
            strupr(str1);
            printf("Uppercase: %s\n", str1);
            break;

        case 3:
            strlwr(str1);
            printf("Lowercase: %s\n", str1);
            break;

        case 4:
            printf("Enter a prefix to check if the string starts with it: ");
            gets(sub);
            if (strncmp(str1, sub, strlen(sub)) == 0)
                printf("Starts with '%s'\n", sub);
            else
                printf("Does not start with '%s'\n", sub);
            break;

        case 5:
            printf("Enter a suffix to check if the string ends with it: ");
            gets(sub);
            int str_length = strlen(str1);
            int sub_length = strlen(sub);
            if (str_length >= sub_length && strcmp(str1 + str_length - sub_length, sub) == 0)
                printf("Ends with '%s'\n", sub);
            else
                printf("Does not end with '%s'\n", sub);
            break;

        case 6:
            printf("Enter a substring to search for in the string: ");
            gets(sub);
            char *substring = strstr(str1, sub);
            if (substring != NULL)
                printf("Substring '%s' found at index %d\n", sub, substring - str1);
            else
                printf("Substring '%s' not found in the string\n", sub);
            break;

        default:
            printf("Invalid choice.\n");
    }

    return 0;
}
