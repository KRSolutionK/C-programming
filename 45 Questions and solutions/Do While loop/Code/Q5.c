#include<stdio.h>
#include<conio.h>
int main() 
{
    int num,reversed=0,remainder;
    printf("Enter a number: ");
    scanf("%d",&num);
    do
    {
        remainder=num%10;     
        reversed=reversed*10+remainder;
        num/=10;                  
    } 
    while(num!=0);
    printf("Reversed number: %d\n",reversed);
    getch();
    return 0;
}
