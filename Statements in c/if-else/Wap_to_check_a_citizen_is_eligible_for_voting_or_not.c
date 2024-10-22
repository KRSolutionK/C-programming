#include <stdio.h>
#include<conio.h>
int main() {
    int a;
    printf("Enter age : ");
    scanf("%d",&a);
    if(a>18)
    {
        printf("You are eligible for voting ");
    }
    else{
        printf("You are not eligible for voting");
    }
    getch();
    return 0;
}
