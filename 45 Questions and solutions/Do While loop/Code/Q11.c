#include<stdio.h>
#include<conio.h>
int main() {
    int num;
    do {
        printf("Enter a number: ");
        scanf("%d",&num);

        // Check if the number is even or odd
        if (num%2==0)
         {
            printf("Even\n");
         } 
        else 
        {
            printf("Odd\n");
        }
    } 
    while(1);
    getch();
    return 0;
}
