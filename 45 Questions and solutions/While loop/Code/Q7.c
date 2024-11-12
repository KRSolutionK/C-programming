#include <stdio.h>
#include<conio.h>
int main() 
{
    int number, largestDigit=0;
    printf("Enter a number");
    scanf("%d",&number);
    if(number<0)
    {
        number = -number;
    }

    while(number>0)
    {
        if(number%10>largestDigit)
         {
            largestDigit=number%10;
        }
        number/=10;
    }
    printf("The largest digit is: %d\n", largestDigit);
    getch();
    return 0;
}
