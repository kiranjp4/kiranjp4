#include<iostream>
#include<time.h>

/*This file conatains a function to add dealy in seconds*/
using namespace std;


void delay(int number_of_seconds)
{
    // Converting time into milli_seconds
    int milli_seconds = 1000 * number_of_seconds;
  
    // Storing start time
    clock_t start_time = clock();
  
    // looping till required time is not achieved
    while (clock() < start_time + milli_seconds)
        ;
}



int fun1(int a)
{
	time_t var;
	time(&var);
   	char *result= ctime(&var);
   	

	cout<<"Time in seconds : "<<result<<endl;
	 delay(2);

}

int fun2(int b)
{
	time_t var1;
	time(&var1);
   	char *result1= ctime(&var1);
   	
	cout<<"Time in seconds : "<<result1<<endl;
}


int main()
{

    
	
	fun1(3);
	fun2(4);
	return 0;
}
