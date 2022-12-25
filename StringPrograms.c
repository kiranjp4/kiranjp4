#include <stdio.h>
#include <string.h>

int main()
{
    /*To get input from the User and then Prints*/
    
    printf("Enter any string :");
    char InputString[100];
    scanf("%[^\n]%*c",InputString);
    
    printf("Enter string is : %s",InputString);
    
    return 0;
    
}