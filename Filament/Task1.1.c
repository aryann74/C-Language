#include <stdio.h>
#include <string.h>
  
int main() {
   char str[50], reversedstr[50];
 
   printf("Enter the String:");
   scanf("%s", str);
    
   strcpy(reversedstr, str);

   strrev(reversedstr);
    
   if(strcmp(str, reversedstr) == 0 )
   {
        printf("%s is a palindrome string.\n", str);
   }
      
   else
   {
        printf("%s is not a palindrome string.\n", str);
   }
      
    return 0;
}