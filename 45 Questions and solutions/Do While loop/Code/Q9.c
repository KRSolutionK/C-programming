#include<stdio.h>
#include<conio.h>
int main()
 {
    int number;
    do 
    {
        printf("Enter a number (enter 0 to stop)= ");
        scanf("%d",&number);
    }
    while(number!=0);
    printf("You entered 0. Exiting loop \n");
    getch();
    return 0;
}
