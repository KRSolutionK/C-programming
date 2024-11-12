#include<stdio.h>
#include<conio.h>
int main() {
    int i,sum = 0;

    for(i=2;i<=100;i+=2)
     {
        sum+=i; 
    }
    printf("The sum of all even numbers between 1 and 100 is: %d\n", sum);
    getch();
    return 0;
}
