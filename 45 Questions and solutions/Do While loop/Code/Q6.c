#include<stdio.h>
#include<conio.h>
int main()
{
    int num,i=1;
    int factorial=1;
    printf("Enter a number=");
    scanf("%d",&num);
   do
   {
        factorial*=i;
        i++;
    } 
    while(i<=num);
    printf("Factorial of %d is %d\n",num,factorial);
    getch();
    return 0;
}
