//PROGRAM TO READ TOTAL SECOND AND CONVERT IT INTO TIME
#include <stdio.h>
int main()
{
    int sec,hours,minutes,a,b,days,c ;
    printf("enter total second:");
    scanf("%d",&sec);
    days=sec/86400;
    c=sec%86400;
    hours=c/3600;
    a=c%3600;
    minutes=a/60;
    b=a%60;
    printf("time = %d days %d hours %d minutes %d seconds",days,hours,minutes,b);
    return 0;
}