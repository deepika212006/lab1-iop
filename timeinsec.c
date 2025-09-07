//PROGRAM TO READ TIME IN HR,MIN,SEC AND CONVERT IT INTO TOTAL SECOND.
#include <stdio.h>
int main()
{
    int sec,a,b,c;
    printf("enter time in hour:");
    scanf("%d",&a);
    printf("enter time in minutes:");
    scanf("%d",&b);
    printf("enter time in seconds:");
    scanf("%d",&c);
    sec=a*3600 + b*60 + c;
    printf("entered time in seconds = %d",sec);
    return 0;
}