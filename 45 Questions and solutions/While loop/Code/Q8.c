#include <stdio.h>
#include<conio.h>
int main() 
{
    int number, sum=0;
    printf("Enter a number");
    scanf("%d",&number);
    if (number<0) 
    {
        number=-number;
    }
    while (number>0)
     {
        sum+=number%10;
        number/=10;  
     }
    printf("The sum of the digits is: %d\n",sum);
    getch();
    return 0;
}
