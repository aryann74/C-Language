#include<stdio.h>
#include<string.h>

int main(){
    char a[50];
    printf("Enter Any String:");
    gets(a);
    printf("Your String in Upercase is %s",strupr(a));

    return 0;
}