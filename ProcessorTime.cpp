#include<iostream>
#include<time.h>

using namespace std;
/*This file conatains a function to add dealy in seconds*/

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

int main()
{
  
    struct tm* local;
    time_t t = time(NULL);
  
    // Get the localtime
    local = localtime(&t);
  
    printf("Local time and date: %s\n",
           asctime(local));
  
  //time_t time(time_t *var);
  //char* ctime(const time_t *time);
  
  time_t var;
  var = time(&var);
  
  char *p = ctime(&var);
  
  cout<<"Time in seconds : "<<var<<endl;
  cout<<"Time Format : "<<p<<endl;
  
  clock_t time_start;
  time_start = clock();
  int i;
  for(i=0;i<3;i++)
  {
  	delay(1);
 }  
 clock_t time_ends;
 time_ends = clock();
 clock_t res = time_ends-time_start;
 
 cout<<"Time elapsed : "<<(float)(time_ends-time_start)/CLOCKS_PER_SEC<<endl;

  
    return 0;
}
