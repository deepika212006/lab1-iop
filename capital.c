//CHECK WHETHER A GIVEN CHARACTER IS CAPITAL LETTER , SMALL CASE LETTER , A DIGIT OR A SPECIAL SYMBOL
#include <stdio.h>
int main ()
{
    char a;
    printf("enter a :");
    scanf("%c",&a);
    if(a>='a' && a<='z'){
        printf("small letter");
    }
    else if(a>='A' && a<='Z'){
        printf("capital letter");
    }
    else if(a>=0){
        printf("a digit");
    }
   else{
    printf("special symbol");
   }
    return 0;
}