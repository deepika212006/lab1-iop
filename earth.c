//EARTH REVOLUTION TIME INTO DAYS,HOURS,MINUTES
#include <stdio.h>
int main()
{
    int a=31558150,days,b,hours,c,minutes;
    days=a/86400;
    b=a%86400;
    hours=b/3600;
    c=b%3600;
    minutes=c/60;
    printf("earth revolution time in days,hours,minutes = %d days %d hours %d minutes",days,hours,minutes);
    return 0;
}