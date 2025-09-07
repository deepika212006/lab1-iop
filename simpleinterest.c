//simple interest
#include <stdio.h>
int main()
{
    float rate,principalamt,time,si,a;
    printf("enter principal amount in rupees :");
    scanf("%f",&principalamt);
    printf("enter time in years :");
    scanf("%f",&time);
    printf("enter rate :");
    scanf("%f",&rate);
    a=principalamt * rate * time;
    si=a/100;
    printf("simple interest of the following amount :%f", si);
    return 0;
}
