/******************************************************************************

                            Online C Compiler.
                Code, Compile, Run and Debug C program online.
Write your code in this editor and press "Run" button to compile and execute it.

*******************************************************************************/

#include <stdio.h>

int main()
{
    int Int_Cap,Tenure_In_Month;
    float expected_Return;
   
    printf("Initial Capital =");
    scanf("%d",&Int_Cap);
    printf("Tenure_In_Month =");
    scanf("%d",&Tenure_In_Month);
    printf("expected_Return =");
    scanf("%f",&expected_Return);
    
    
    int temp,temp1;
    int Final_Gain;
    temp = Int_Cap;
    /*Calculation*/
    while(Tenure_In_Month != 0)
    {
        temp1 = temp * (expected_Return);
        temp = temp+temp1;
        
        Tenure_In_Month--;
        
        if(Tenure_In_Month == 0)
        {
            Final_Gain = temp;
        }
    }
    printf("Wiht the initla capital of %d,with expected return of %f,Final gain will be %d",Int_Cap,expected_Return,Final_Gain);
    
    return 0;
}