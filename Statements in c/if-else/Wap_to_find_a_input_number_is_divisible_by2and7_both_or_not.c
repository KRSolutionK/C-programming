#include <stdio.h>
#include<conio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if(a%2==0 && a%7==0)
    {
        printf("The number is divisible by both 2 and 7 ");
    }
    else 
    {
        printf("The number is not divisible by both 2 and 7 ");
    }
    getch();
    return 0;
}
