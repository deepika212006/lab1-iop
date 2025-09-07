//read marks of five subjects and print percentage
#include <stdio.h>
int main()
{
    float maths,sci,soc,hindi,eng,sum,percentage;
    printf("enter maths marks ");
    scanf("%f",&maths);
    printf("enter science marks ");
    scanf("%f",&sci);
    printf("enter social marks ");
    scanf("%f",&soc);
    printf("enter hindi marks ");
    scanf("%f",&hindi);
    printf("enter english marks ");
    scanf("%f",&eng);
    sum=maths+sci+hindi+soc+eng;
    percentage=sum/5;
    printf("maths marks=%f\n",maths);
    printf("science marks=%f\n",sci);
    printf("social marks=%f\n",soc);
    printf("hindi marks=%f\n",hindi);
    printf("englsih marks=%f\n",eng);
    printf("total marks=%f \n",sum);
    printf("percentage : %f \n",percentage);
    return 0;
}