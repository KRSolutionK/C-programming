#include <stdio.h>
#include<conio.h>
int main() {
    int number=1;
    int count=0; 
    while(number<=100) 
    {
        if (number%3==0 && number%5==0) 
        {
            count++; 
        }
        number++; 
    }
    printf("Count of numbers between 1 and 100 divisible by both 3 and 5 is =\t%d\n",count);
    getch();
    return 0;
}
