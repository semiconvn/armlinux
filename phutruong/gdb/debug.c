/* calculate factorial */
#include <stdio.h>  // printf
#include <syslog.h>

//#define NDEBUG //not in debugging mode

#if 0
#ifndef NDEBUG
 #define   MY_CUSTOM_PRINTF(... )   printf( __VA_ARGS__)
#else
 #define   MY_CUSTOM_PRINTF(...)  
#endif
#else
#ifndef NDEBUG
 #define   MY_CUSTOM_PRINTF(... )  syslog(LOG_INFO,__VA_ARGS__)
#else
 #define   MY_CUSTOM_PRINTF(...)  
#endif
#endif


int subroutine(char* s)
{
  MY_CUSTOM_PRINTF("%s\n", s);
}

int main(int argc, char* argv[])
{
  int num, i, j;
  openlog("My App", LOG_PID | LOG_CONS, LOG_USER);
  
  subroutine("Enter number:");
  scanf("%d", &num);  
  j = num;
  for(i=1; i<num; i++){
     j = i*j;
  }
 MY_CUSTOM_PRINTF("num = %d, j = %d \n", num, j);
 
 closelog();
}
