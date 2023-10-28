#include<stdio.h>
#include<string.h>

int main(){
    char a[50];
    printf("Enter Any String:");
    gets(a);
    printf("Your String in Lowercase is %s",strlwr(a));

    return 0;
}