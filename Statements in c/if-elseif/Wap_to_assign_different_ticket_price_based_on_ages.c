#include <stdio.h>
#include<conio.h>
int main() {
    int a;
    printf("Enter your age: ");
    scanf("%d",&a);
    
    if(a<=12)
    {
        printf("Your ticket is free ");
    }
    else if(a<=24)
    {
        printf("Your ticket price is Rs.100 ");
    }
    else if(a<=60)
   {
       printf("Your ticket price is Rs.200 ");
    }
    else{
        printf("Your ticket price is Rs.50 ");
    }
    getch();
    return 0;
}
