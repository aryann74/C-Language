#include<stdio.h>
#include<string.h>

int main()
{
 char pass[20],ch;
 int i,number,special,letter;
 number=special=letter=0;

 printf("Enter Password :");
 gets(pass);
 for(i=0;pass[i]!='\0';i++)
 {
  if(pass[i]>='0' && pass[i]<='9')
  {
    number=1;
  }
  if(pass[i]>='a' && pass[i]<='z' || pass[i]>='A' && pass[i]<='Z')
  {
    letter=1;
  }
    if(pass[i]=='!' || pass[i]=='@' || pass[i]=='#' || pass[i]=='$' || pass[i]=='%' || pass[i]=='*')
  {
    special=1;
  }

 }
 if(number==0 || special==0 || letter==0 || strlen(pass)<6)
 {
    printf("\n Invalid Password");
 }
  
 else
 {
    printf("\n Valid Password");
 }
  
 return 0;

}