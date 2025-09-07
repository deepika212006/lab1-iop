//temp fahrenheit to celcius
#include <stdio.h>
int main()
{
    float temp,formula;
    printf("enter temp in fahrenheit :");
    scanf("%f",&temp);
    formula=  (temp -32 ) * 0.556;
    printf("temp in celcius : %f",&formula);
    return 0;
}