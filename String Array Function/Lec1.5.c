#include<stdio.h>
#include<string.h>

int main()
{
 int tmp,i;
 char str[30];
 printf("Enter any string: ");
 gets(str);
 for(i=0; str[i]!='\0'; i++)
 {
   if(str[i-1]==' ' || i==0)
   {
     if(str[i]>='a' && str[i]<='z')
     {
        str[i]=str[i]-32;
     }
     else
       if(str[i]>='A' && str[i]<='Z')
       {
            str[i]=str[i]+32;
       }
   }
   printf("%c",str[i]);
 }
 return 0;
}

