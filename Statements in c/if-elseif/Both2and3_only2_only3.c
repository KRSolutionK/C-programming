#include <stdio.h>
#include<conio.h>
int main() {
    int a;
    printf("Enter a number: ");
    scanf("%d",&a);
    
    if(a%2==0 && a%3==0)
    {
        printf("The given number is divisible by both 2 & 3");
    }
    else if(a%2==0)
    {
        printf("The given number is only divisible by 2 ");
    }
    else if(a%3==0)// else
 {
        printf("The given number is only divisible by 3");
    }
  
    getch();
    return 0;
}
