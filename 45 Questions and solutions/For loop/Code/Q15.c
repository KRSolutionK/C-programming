#include<stdio.h>
#include<conio.h>
int main()
{
    int num,reversed_num=0,original_num,remainder;

    printf("Enter a number: ");
    scanf("%d",&num);

    original_num=num;  // Store the original number to compare later

    // Reverse the digits of the number
    for(num;num!=0;num/=10) 
    {
        remainder=num%10;            // Get the last digit
        reversed_num=reversed_num*10+remainder;  // Build the reversed number
    }

    // Check if the number is a palindrome
    if(original_num==reversed_num)
     {
        printf("%d is a palindrome.\n",original_num);
    } 
    else
     {
        printf("%d is not a palindrome.\n",original_num);
    }
    getch();
    return 0;
}
