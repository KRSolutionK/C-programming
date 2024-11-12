#include<stdio.h>
#include<conio.h>
int main() 
{
    int num,sum=0,digit;
    printf("Enter a number=");
    scanf("%d",&num);
    for(num;num!=0;num/=10)
    {
        digit=num%10;
        sum+=digit;     
    }
    printf("The sum of the digits is: %d\n",sum);
    getch();
    return 0;
}
