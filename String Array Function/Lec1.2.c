#include<stdio.h>
#include<string.h>

int main(){
    char a,b;
    int abc;
    printf("Enter Lowercase Character:");
    scanf("%c",&a);
    abc=a;
    b=abc-32;
    printf("\n Your Character in Upercase is %c",b);

    return 0;
}