#include <stdio.h>
#include<conio.h>
int main() 
{
    int a;
    printf("Enter a number (negative number to stop)= ");
    scanf("%d",&a);
    while (a>=0) 
    {
        printf("You entered:%d\n",a);
        printf("Enter a number (negative number to stop)= ");
        scanf("%d",&a);
    }
    printf("Negative number entered. Exiting the program.\n");
    getch();
    return 0;
}
