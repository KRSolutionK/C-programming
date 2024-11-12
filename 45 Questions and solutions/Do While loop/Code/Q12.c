#include <stdio.h>
#include<conio.h>
int main()
{
    int number;
    do {
        printf("Enter a number: ");
        scanf("%d",&number);
        if (number > 0) 
        {
            printf("The number is positive.\n");
        } 
        else if(number<0) 
        {
            printf("The number is negative.\n");
        } 
        else 
        {
            printf("The number is zero.\n");
        }
    } while (1);
    getch();
    return 0;
}
