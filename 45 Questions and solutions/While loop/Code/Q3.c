#include<stdio.h>
#include<conio.h>
int main() 
{
    int n= 1; 
    int sum = 0;    
    while (n<= 100) {
        sum+=n;
        n++;
    }
    printf("The sum of the first 100 natural numbers is: %d", sum);
    getch();
    return 0; 
}
