#include<stdio.h>
#include<string.h>
    
    int main(){
    	char email[20];
    	char userpassword[20];
    	
    	printf("Enter the User Name : ");
    	gets(email);
    	
    	printf("Enter the Password : ");
    	gets(userpassword);
    	
    	if(!strcmp(email, "admin@gmail.com") && !strcmp(userpassword, "admin@123"))
        {
    		printf("\n****Login Successful****");
    	}
        else
        {
    		printf("\n****Provided Information Incorrect. Please Provide Right Information****");
    	}

    	return 0;
    }