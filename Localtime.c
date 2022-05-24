#include<iostream>
#include<time.h>

/*This file conatains a function to add dealy in seconds*/
int main()
{
  
    struct tm* local;
    time_t t = time(NULL);
  
    // Get the localtime
    local = localtime(&t);
  
    printf("Local time and date: %s\n",
           asctime(local));
  
    return 0;
}
