#include <stdio.h>
#include<conio.h>
int main() {
    int a,b;
    printf("Enter first number: ");
    scanf("%d",&a);
    printf("Enter second number: ");
    scanf("%d",&b);
    if(a>b)
    {
        printf("The greater number is=\t %d",a);
    }
    else 
    {
        printf("The greater number is=\t %d",b);
    }
 
    getch();
    return 0;
}
