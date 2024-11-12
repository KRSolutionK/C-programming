#include <stdio.h>
#include<conio.h>
int main()
{
    int num=5; 
    int count=0;
    do
    {
        count++;  
        num+=5;  
    } 
    while(num<=100);
    printf("The total numbers that are divisible by 5 are =\t%d\n",count);
    getch();
    return 0;
}
