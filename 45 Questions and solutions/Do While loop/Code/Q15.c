#include<stdio.h>
#include<conio.h>
int main()
{
    int num;
    do {
        printf("Enter a number: ");
        scanf("%d", &num);
        if (num<0)
        {
            break;
        }
        if(num%2==0)
        {
            printf("Even\n");
        } 
        else
        {
            printf("Odd\n");
        }
    } while (1);
    printf("Negative number entered. Exiting loop\n");
    getch();
    return 0;
}
