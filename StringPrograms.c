#include <stdio.h>
#include <string.h>

int main () 
{
    /*Local Variable*/
  	char InputString[100];
   
	/*1. To get input from the User and then Prints */ 
	
	printf ("Enter any string :");

	scanf ("%[^\n]%*c", InputString);
	printf ("Entered string is : %s\n", InputString);

 
	/*2.  To find the length of the string */ 
	
	char StringIndex = 0;
	while (InputString[StringIndex] != '\0')
	{
		StringIndex++;
	}
	printf ("Entered Length of the string is =%d\n", StringIndex);

 
    /*3. To Seperate the string */ 
    StringIndex = 0;
    while(InputString[StringIndex] != '\0')
    {
        printf("%c ",InputString[StringIndex]);
        StringIndex++;
    }

	return 0;

 
}
