#include <stdio.h>
#include<conio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    if(a>0)
    {
        printf("The given number is positive");
    }
    else{
        printf("The given number is negative");
    }
    getch();
    return 0;
}
