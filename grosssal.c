//calculate gross salary
#include <stdio.h>
int main()
{
    float basic,houserent,medical,bonus,others,grosssal;
    printf("enter your basic salary :");
    scanf("%f",&basic);
    printf("enter house rent :");
    scanf("%f",&houserent);
    printf("enter medical expenses :");
    scanf("%f",&medical);
    printf("enter bonus :");
    scanf("%f",&bonus);
    printf("enter other expenses :");
    scanf("%f",&others);
    grosssal=basic+houserent+medical+bonus+others;
    printf("your gross salary : %f",grosssal);
    return 0;

}