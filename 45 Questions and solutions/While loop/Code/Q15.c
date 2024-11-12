#include <stdio.h>
#include<conio.h>
int main()
{
    int number;
    printf("Enter a number (0 or negative number to exit): ");
    scanf("%d", &number);
    while (number>0) 
    {
        int isPrime=1;
        if(number==1) 
        {
            isPrime=0;
        } 
        else
         {
            for(int i=2; i*i<=number; i++)
            {
                if(number%i==0) 
                {
                    isPrime=0; // Found a divisor, not prime
                    break;
                }
            }
        }
        if(isPrime)
        {
            printf("%d is a prime number.\n", number);
        } 
        else
        {
            printf("%d is not a prime number.\n", number);
        }
        printf("Enter a number (0 or negative number to exit): ");
        scanf("%d", &number);
    }
    printf("Exiting the program.\n");
    getch();
    return 0;
}

















