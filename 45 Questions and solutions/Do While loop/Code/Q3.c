#include<stdio.h>
#include<conio.h>
int main() 
{
    int i=1;   
    int sum=0;  
    do {
        sum+=i;    
        i++;      
        } 
        while(i<=50);
    printf("The sum of the first 50 natural numbers is: %d\n",sum);
    getch();
    return 0;
}
