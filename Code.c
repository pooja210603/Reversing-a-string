//WAP to reverse a string given by user.
#include <stdio.h>
#include<string.h>
int main()
{
    int len;int i;
    char str[20];
    printf("Enter the string to be reversed: \n");
    scanf("%s",&str);
    len=strlen(str);
    
    char arr[len];
    for(i=0;i<len;i++)
    {
        arr[i]=str[i];
        
    }
    printf("Reversed string is: \n");
    for(i=len-1;i>=0;i--)
    {
        printf("%c",str[i]);
    }
}
