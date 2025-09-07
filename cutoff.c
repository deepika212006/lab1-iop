//WRITE A C PROGRAM TO CALCULATE THE CUT OFF MARK OF A STUDENT
#include <stdio.h>
int main()
{
    float cm,m,p,c,e;
    printf("enter mathematics marks out of 200:");
    scanf("%f",&m);
    printf("enter physics marks out of 200:");
    scanf("%f",&p);
    printf("enter chemistry marks out of 200:");
    scanf("%f",&c);
    printf("enter entrance examination marks out of 100:");
    scanf("%f",&m);
    cm = (m/2) + (p/2) + (c/2) + e;
    printf("cut off marks of student=%f",cm);
    return 0;
}


