//SWAP TWO VARIABLES USING THIRD VARIABLE

#include <stdio.h>
int main()
{
    int a,b,c;
    printf("enter a number");
    scanf("%d",&a);
    printf("enter b number");
    scanf("%d",&b);
    c=a;
    a=b;
    b=c;
    printf("after swapping \n a=%d \n b=%d",a,b);
    return 0;

}
