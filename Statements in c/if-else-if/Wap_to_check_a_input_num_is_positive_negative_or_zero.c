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
    else if(a<0)
    {
        printf("The given number is negative ");
    }
    else 
 {
        printf("The given number is Zero");
    }
    getch();
    return 0;
}
